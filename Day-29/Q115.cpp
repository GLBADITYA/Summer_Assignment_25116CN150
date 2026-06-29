#include<iostream>
#include<cstring>
using namespace std;


int main() {
    char str[50];
    int choice;

    cout << "Enter a string: ";
    cin >> str;

    cout << "\n1. Length\n2. Reverse\n3. Uppercase\nEnter Choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Length = " << strlen(str);
            break;

        case 2:
            strrev(str);
            cout << "Reverse = " << str;
            break;

        case 3:
            strupr(str);
            cout << "Uppercase = " << str;
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}