#include<iostream>
#include<fstream>
using namespace std;
class student{
    int roll_no;
    string name;
    int mark[];
    public:
    void accept()
    {
        cout<<"enter the roll_no::";
        cin>>roll_no;
        cout<<"enter the name::";
        cin>>name;
        cout<<"enter the three sub marks::";

        int i;
        for(int i=0;i<3;i++)
        {
           cin>>mark[i];
        }
        cout<<"marks are::";
        
         for(int i=0;i<3;i++)
        {
           cout<<mark[i];
           cout<<"\t";
        }
        
    }

};
class gradebook
{
    void addstudent(int name)
    {
        cout<<"add new student";
        cin>>name;
    }
    
};
int main()
{
student s;
s.accept();
}