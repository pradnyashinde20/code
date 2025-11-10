#include <iostream>
#include <vector>
#include <fstream>
#include <stdexcept>
#include <iomanip>
#include <functional>

using namespace std;

// -------------------- Item Class --------------------
class Item {
public:
    int itemID;
    string itemName;
    double price;
    int stockQuantity;

    Item(int id, string name, double pr, int qty) {
        if (pr < 0 || qty < 0) {
            throw invalid_argument("Price and quantity must be non-negative.");
        }
        itemID = id;
        itemName = name;
        price = pr;
        stockQuantity = qty;
    }

    void display() const {
        cout << "ID: " << itemID << ", Name: " << itemName
             << ", Price: $" << price << ", Stock: " << stockQuantity << endl;
    }
};

// -------------------- PurchasedItem Struct --------------------
struct PurchasedItem {
    Item item;
    int quantity;

    PurchasedItem(Item i, int qty) : item(i), quantity(qty) {}
};

// -------------------- Bill Class --------------------
class Bill {
private:
    int billID;
    string customerName;
    vector<PurchasedItem> purchasedItems;

public:
    Bill(int id, const string& name) : billID(id), customerName(name) {}

    // Overload + to add item to the bill
    Bill& operator+(pair<Item&, int> purchase) {
        Item& item = purchase.first;
        int qty = purchase.second;

        if (qty <= 0) {
            throw invalid_argument("Purchase quantity must be greater than 0.");
        }
        if (qty > item.stockQuantity) {
            throw runtime_error("Not enough stock available.");
        }

        item.stockQuantity -= qty;
        purchasedItems.push_back(PurchasedItem(item, qty));
        return *this;
    }

    // Overload << to display bill
    friend ostream& operator<<(ostream& os, const Bill& bill) {
        if (bill.purchasedItems.empty()) {
            throw runtime_error("Cannot generate empty bill.");
        }

        os << "========== BILL ==========\n";
        os << "Bill ID: " << bill.billID << "\nCustomer: " << bill.customerName << "\n";
        os << "--------------------------\n";
        os << left << setw(10) << "ItemID"
           << setw(20) << "ItemName"
           << setw(10) << "Price"
           << setw(10) << "Qty"
           << setw(10) << "Total\n";

        double total = 0;
        for (const auto& p : bill.purchasedItems) {
            double subtotal = p.item.price * p.quantity;
            os << left << setw(10) << p.item.itemID
               << setw(20) << p.item.itemName
               << setw(10) << p.item.price
               << setw(10) << p.quantity
               << setw(10) << subtotal << "\n";
            total += subtotal;
        }
        os << "--------------------------\n";
        os << "Total Amount: $" << total << "\n";
        os << "==========================\n";
        return os;
    }

    // Save bill to file
    void saveToFile(const string& filename) const {
        ofstream fout(filename, ios::app);
        if (!fout) {
            cerr << "Failed to open file for writing.\n";
            return;
        }

        fout << billID << "|" << customerName;
        for (const auto& p : purchasedItems) {
            fout << "|" << p.item.itemID << "," << p.item.itemName << "," << p.item.price << "," << p.quantity;
        }
        fout << "\n";
        fout.close();
    }

    static void loadBills(const string& filename) {
        ifstream fin(filename);
        if (!fin) {
            cout << "No previous bills found.\n";
            return;
        }

        string line;
        cout << "\n=== Previous Bills ===\n";
        while (getline(fin, line)) {
            cout << line << endl;
        }
        fin.close();
    }
};

// -------------------- Main Function --------------------
int main() {
    try {
        // Load previous bills
        Bill::loadBills("bills.txt");

        // Item Inventory
        vector<Item> inventory = {
            Item(1, "Laptop", 999.99, 10),
            Item(2, "Mouse", 19.99, 50),
            Item(3, "Keyboard", 49.99, 30),
            Item(4, "Monitor", 199.99, 20)
        };

        cout << "\n--- Welcome to Tech Store ---\n";
        for (const auto& item : inventory) {
            item.display();
        }

        int billID = 1001;
        string customer;
        cout << "\nEnter customer name: ";
        getline(cin, customer);

        Bill bill(billID, customer);
        char choice;

        do {
            int itemID, qty;
            cout << "Enter item ID to purchase: ";
            cin >> itemID;
            cout << "Enter quantity: ";
            cin >> qty;

            bool found = false;
            for (auto& item : inventory) {
                if (item.itemID == itemID) {
                    bill + make_pair(ref(item), qty);
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Item ID not found.\n";
            }

            cout << "Add another item? (y/n): ";
            cin >> choice;
        } while (choice == 'y' || choice == 'Y');

        // Display and save bill
        cout << bill;
        bill.saveToFile("bills.txt");

    } catch (const exception& ex) {
        cerr << "Error: " << ex.what() << endl;
    }

    return 0;
}