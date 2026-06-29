#include <iostream>
using namespace std;

class Bank {
    int aNo;
    string nam;
    float bal;

public:
    void create() {
        cout << "Enter Account No: ";
        cin >> aNo;
        cout << "Enter Name: ";
        cin >> nam;
        cout << "Enter Balance: ";
        cin >> bal;
    }

    void display() {
        cout<<"=======YOUR DETAILS =======";
        cout << "\nAccount No: " << aNo;
        cout << "\nName: " << nam;
        cout << "\nBalance: " << bal << endl;
    }
};

int main() {
    Bank b;
    b.create();
    b.display();
    return 0;
}