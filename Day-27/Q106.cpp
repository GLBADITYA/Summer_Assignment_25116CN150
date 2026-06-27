#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
    int id;
    string name;
    int age;
    string department;
    double salary;

public:
    Employee(int i, string n, int a, string d, double s) {
        id = i;
        name = n;
        age = a;
        department = d;
        salary = s;
    }

    int getId() const { return id; }

    void display() const {
        cout << "ID: " << id << "\n"
             << "Name: " << name << "\n"
             << "Age: " << age << "\n"
             << "Department: " << department << "\n"
             << "Salary: " << salary << "\n";
        cout << "---------------------------\n";
    }
};

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n=== Employee Management System ===\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id, age;
            string name, dept;
            double salary;

            cout << "Enter Employee ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Age: ";
            cin >> age;
            cin.ignore();
            cout << "Enter Department: ";
            getline(cin, dept);
            cout << "Enter Salary: ";
            cin >> salary;

            employees.push_back(Employee(id, name, age, dept, salary));
            cout << "Employee added successfully!\n";
        }
        else if (choice == 2) {
            if (employees.empty()) {
                cout << "No employee records available.\n";
            } else {
                cout << "\n--- Employee Records ---\n";
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
                    cout << "\nEmployee Found:\n";
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
