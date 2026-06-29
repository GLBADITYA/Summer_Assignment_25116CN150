#include <iostream>
using namespace std;

string name[5];
int marks[5];

void input() {
    cout << "Enter details of 5 students:\n";
    for(int i = 0; i < 5; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name: ";
        cin >> name[i];
        cout << "Marks: ";
        cin >> marks[i];
    }
}

void display() {
    cout << "\n--- Student Records ---\n";
    for(int i = 0; i < 5; i++) {
        cout << "Name: " << name[i]
             << "\tMarks: " << marks[i] << endl;
    }
}

void search() {
    string s;
    cout << "Enter student name to search: ";
    cin >> s;

    for(int i = 0; i < 5; i++) {
        if(name[i] == s) {
            cout << "Student Found\n";
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            return;
        }
    }

    cout << "Student Not Found\n";
}

int main() {
    int choice;

    while(true) {
        cout << "\n===== Student Management System =====";
        cout << "\n1. Input Records";
        cout << "\n2. Display Records";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                input();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                cout << "Thank You!";
                return 0;
            default:
                cout << "Invalid Choice!";
        }
    }
}