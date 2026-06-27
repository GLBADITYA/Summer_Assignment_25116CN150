#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    int age;
    char course[50];
};

int main() {
    Student s[50];
    int n = 0, choice;

    do {
        cout << "\n1. Add Student\n2. Display All\n3. Search by Roll No\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (n < 50) {
                    cout << "Roll No: ";
                    cin >> s[n].rollNo;
                    cout << "Name: ";
                    cin >> s[n].name;   // simple input
                    cout << "Age: ";
                    cin >> s[n].age;
                    cout << "Course: ";
                    cin >> s[n].course;
                    n++;
                    cout << "Student added!\n";
                } else {
                    cout << "Limit reached!\n";
                }
                break;

            case 2:
                if (n == 0) cout << "No records.\n";
                else {
                    for (int i = 0; i < n; i++) {
                        cout << s[i].rollNo << " " << s[i].name << " "
                             << s[i].age << " " << s[i].course << endl;
                    }
                }
                break;

            case 3: {
                int r;
                cout << "Enter Roll No: ";
                cin >> r;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (s[i].rollNo == r) {
                        cout << s[i].rollNo << " " << s[i].name << " "
                             << s[i].age << " " << s[i].course << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Not found\n";
                break;
            }

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
