#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
    int id;
    string name;
    double basicSalary;
    double hra;   
    double da;   
    double gross;

public:
    Employee(int i, string n, double b, double h, double d) {
        id = i;
        name = n;
        basicSalary = b;
        hra = h;
        da = d;
        gross = basicSalary + hra + da;
    }

    int getId() const { return id; }

    void display() const {
        cout << "\n--- Employee Salary Record ---\n";
        cout << "ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Basic Salary: " << basicSalary << "\n";
        cout << "HRA: " << hra << "\n";
        cout << "DA: " << da << "\n";
        cout << "Gross Salary: " << gross << "\n";
    }
};

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n=== Salary Management System ===\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display All Records\n";
        cout << "3. Search by Employee ID\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string name;
            double basic, hra, da;

            cout << "Enter Employee ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Basic Salary: ";
            cin >> basic;
            cout << "Enter HRA: ";
            cin >> hra;
            cout << "Enter DA: ";
            cin >> da;

            employees.push_back(Employee(id, name, basic, hra, da));
            cout << "Salary record added successfully!\n";
        }
        else if (choice == 2) {
            if (employees.empty()) {
                cout << "No records available.\n";
            } else {
                for (const auto &emp : employees) {
                    emp.display();
                }
            }
        }
        else if (choice == 3) {
            int searchId;
            cout << "Enter Employee ID to search: ";
            cin >> searchId;
            bool found = false;

            for (const auto &emp : employees) {
                if (emp.getId() == searchId) {
                    emp.display();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Employee not found.\n";
            }
        }
        else if (choice == 4) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
