#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
    int roll;
    string name;
    vector<int> marks;
    int total;
    float percentage;
    char grade;

public:
    Student(int r, string n, vector<int> m) {
        roll = r;
        name = n;
        marks = m;
        total = 0;
        for (int mark : marks) {
            total += mark;
        }
        percentage = (float)total / marks.size();
        grade = calculateGrade();
    }

    char calculateGrade() {
        if (percentage >= 90) return 'A';
        else if (percentage >= 75) return 'B';
        else if (percentage >= 60) return 'C';
        else if (percentage >= 40) return 'D';
        else return 'F';
    }

    void display() const {
        cout << "\n--- Marksheet ---\n";
        cout << "Roll No: " << roll << "\n";
        cout << "Name: " << name << "\n";
        cout << "Marks: ";
        for (int mark : marks) cout << mark << " ";
        cout << "\nTotal: " << total;
        cout << "\nPercentage: " << percentage << "%";
        cout << "\nGrade: " << grade << "\n";
    }

    int getRoll() const { return roll; }
};

int main() {
    vector<Student> students;
    int choice;

    while (true) {   // cleaner loop
        cout << "\n=== Marksheet Generation System ===\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int roll, subjects;
            string name;
            cout << "Enter Roll No: ";
            cin >> roll;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter number of subjects: ";
            cin >> subjects;

            vector<int> marks;
            for (int i = 0; i < subjects; i++) {
                int mark;
                cout << "Enter marks for subject " << (i + 1) << ": ";
                cin >> mark;
                marks.push_back(mark);
            }

            students.push_back(Student(roll, name, marks));
            cout << "Record added successfully!\n";
        }
        else if (choice == 2) {
            if (students.empty()) {
                cout << "No records available.\n";
            } else {
                for (const auto &s : students) {
                    s.display();
                }
            }
        }
        else if (choice == 3) {
            int searchRoll;
            cout << "Enter Roll No to search: ";
            cin >> searchRoll;
            bool found = false;
            for (const auto &s : students) {
                if (s.getRoll() == searchRoll) {
                    s.display();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Student not found.\n";
        }
        else if (choice == 4) {
            cout << "Exiting program...\n";
            break;   // stops the loop
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
