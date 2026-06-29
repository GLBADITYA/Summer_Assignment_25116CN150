#include <iostream>
using namespace std;

class Inventory {
    int id, qty;
    string name;

public:
    void addItem() {
        cout << "Enter Item ID: ";
        cin >> id;
        cout << "Enter Item Name: ";
        cin >> name;
        cout << "Enter Quantity: ";
        cin >> qty;
    }

    void display() {
        cout << "\nItem ID: " << id;
        cout << "\nItem Name: " << name;
        cout << "\nQuantity: " << qty << endl;
    }
};

int main() {
    Inventory i;
    i.addItem();
    i.display();

    return 0;
}