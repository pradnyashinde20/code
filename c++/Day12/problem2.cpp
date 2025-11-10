#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
#include <iomanip>

using namespace std;

// Custom Exception Classes
class InvalidMarksException : public exception {
public:
    const char* what() const noexcept override {
        return "Marks must be between 0 and 100.";
    }
};

class DuplicateRollNoException : public exception {
public:
    const char* what() const noexcept override {
        return "Duplicate Roll Number found!";
    }
};

class EmptyGradebookException : public exception {
public:
    const char* what() const noexcept override {
        return "Gradebook is empty!";
    }
};

// Student Class
class Student {
    int rollNo;
    string name;
    int marks[3];

public:
    Student() {}

    Student(int r, string n, int m1, int m2, int m3) {
        if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100)
            throw InvalidMarksException();
        rollNo = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    int getRollNo() const { return rollNo; }
    string getName() const { return name; }
    double average() const {
        return (marks[0] + marks[1] + marks[2]) / 3.0;
    }

    void updateMarks(int m1, int m2, int m3) {
        if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100)
            throw InvalidMarksException();
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void display() const {
        cout << setw(5) << rollNo << setw(15) << name
             << setw(10) << marks[0]
             << setw(10) << marks[1]
             << setw(10) << marks[2]
             << setw(10) << fixed << setprecision(2) << average()
             << endl;
    }

    // Overload ++ to add bonus marks (max 100)
    Student& operator++() {
        for (int i = 0; i < 3; i++) {
            if (marks[i] < 100) marks[i]++;
        }
        return *this;
    }

    // Overload > to compare average marks
    bool operator>(const Student& other) const {
        return this->average() > other.average();
    }

    // For file writing
    string serialize() const {
        return to_string(rollNo) + "," + name + "," +
               to_string(marks[0]) + "," +
               to_string(marks[1]) + "," +
               to_string(marks[2]);
    }

    // For file reading
    static Student deserialize(const string& line) {
        int r, m1, m2, m3;
        string n;
        size_t pos1 = line.find(',');
        r = stoi(line.substr(0, pos1));

        size_t pos2 = line.find(',', pos1 + 1);
        n = line.substr(pos1 + 1, pos2 - pos1 - 1);

        size_t pos3 = line.find(',', pos2 + 1);
        m1 = stoi(line.substr(pos2 + 1, pos3 - pos2 - 1));

        size_t pos4 = line.find(',', pos3 + 1);
        m2 = stoi(line.substr(pos3 + 1, pos4 - pos3 - 1));

        m3 = stoi(line.substr(pos4 + 1));
        return Student(r, n, m1, m2, m3);
    }
};

// Gradebook Class
class Gradebook {
    vector<Student> students;

public:
    void loadFromFile(const string& filename) {
        ifstream file(filename);
        string line;
        while (getline(file, line)) {
            if (!line.empty()) {
                students.push_back(Student::deserialize(line));
            }
        }
        file.close();
    }

    void saveToFile(const string& filename) {
        ofstream file(filename);
        for (const auto& student : students) {
            file << student.serialize() << endl;
        }
        file.close();
    }

    void addStudent(const Student& s) {
        for (const auto& student : students) {
            if (student.getRollNo() == s.getRollNo())
                throw DuplicateRollNoException();
        }
        students.push_back(s);
    }

    void displayAll() const {
        if (students.empty()) throw EmptyGradebookException();
        cout << setw(5) << "Roll" << setw(15) << "Name"
             << setw(10) << "Marks1" << setw(10) << "Marks2"
             << setw(10) << "Marks3" << setw(10) << "Average" << endl;
        for (const auto& s : students) {
            s.display();
        }
    }

    Student* searchByRollNo(int roll) {
        for (auto& s : students) {
            if (s.getRollNo() == roll) return &s;
        }
        return nullptr;
    }

    void incrementMarks(int roll) {
        Student* s = searchByRollNo(roll);
        if (s) {
            ++(*s);
        } else {
            throw runtime_error("Student not found!");
        }
    }

    void updateMarks(int roll, int m1, int m2, int m3) {
        Student* s = searchByRollNo(roll);
        if (s) {
            s->updateMarks(m1, m2, m3);
        } else {
            throw runtime_error("Student not found!");
        }
    }
};

// Main Menu-Driven Program
int main() {
    Gradebook gb;
    string filename = "gradebook.txt";

    try {
        gb.loadFromFile(filename);
        cout << "Loaded student data from file.\n";
    } catch (...) {
        cout << "Could not load file or file is empty.\n";
    }

    int choice;
    do {
        cout << "\n--- Gradebook Menu ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Update Student Marks\n";
        cout << "5. Add Bonus Marks (++ Operator)\n";
        cout << "6. Save & Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        try {
            if (choice == 1) {
                int roll, m1, m2, m3;
                string name;
                cout << "Enter Roll No: "; cin >> roll;
                cout << "Enter Name: "; cin.ignore(); getline(cin, name);
                cout << "Enter marks in 3 subjects: ";
                cin >> m1 >> m2 >> m3;
                Student s(roll, name, m1, m2, m3);
                gb.addStudent(s);
                cout << "Student added successfully.\n";
            } else if (choice == 2) {
                gb.displayAll();
            } else if (choice == 3) {
                int roll;
                cout << "Enter Roll No to search: ";
                cin >> roll;
                Student* s = gb.searchByRollNo(roll);
                if (s) s->display();
                else cout << "Student not found!\n";
            } else if (choice == 4) {
                int roll, m1, m2, m3;
                cout << "Enter Roll No: ";
                cin >> roll;
                cout << "Enter new marks: ";
                cin >> m1 >> m2 >> m3;
                gb.updateMarks(roll, m1, m2, m3);
                cout << "Marks updated.\n";
            } else if (choice == 5) {
                int roll;
                cout << "Enter Roll No for bonus marks: ";
                cin >> roll;
                gb.incrementMarks(roll);
                cout << "Bonus marks added.\n";
            } else if (choice == 6) {
                gb.saveToFile(filename);
                cout << "Data saved. Exiting...\n";
            } else {
                cout << "Invalid choice!\n";
            }
        } catch (exception& e) {
            cout << "Error: " << e.what() << endl;
        }

    } while (choice != 6);

    return 0;
}