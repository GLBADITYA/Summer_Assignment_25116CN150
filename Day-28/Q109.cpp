#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string name;
    bool issued;
};

int main() {
    Book b[10];
    int n = 0, choice, id;

    do {
        cout << "\n1.Add Book\n2.Display Books\n3.Issue Book\n4.Return Book\n5.Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Book ID: ";
            cin >> b[n].id;
            cin.ignore();
            cout << "Book Name: ";
            getline(cin, b[n].name);
            b[n].issued = false;
            n++;
            break;

        case 2:
            cout << "\nID\tBook Name\tStatus\n";
            for (int i = 0; i < n; i++)
                cout << b[i].id << "\t" << b[i].name << "\t"
                     << (b[i].issued ? "Issued" : "Available") << endl;
            break;

        case 3:
            cout << "Enter Book ID: ";
            cin >> id;
            for (int i = 0; i < n; i++)
                if (b[i].id == id)
                    b[i].issued = true;
            break;

        case 4:
            cout << "Enter Book ID: ";
            cin >> id;
            for (int i = 0; i < n; i++)
                if (b[i].id == id)
                    b[i].issued = false;
            break;

        case 5:
            cout << "Program Ended.";
            break;

        default:
            cout << "Invalid Choice!";
        }

    } while (choice != 5);

    return 0;
}