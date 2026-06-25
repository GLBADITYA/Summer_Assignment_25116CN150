#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;

    string nam[n];
    cout << "Enter the names:\n";
    for (int i = 0; i < n; i++) {
        cin >> nam[i];
    }


    sort(nam, nam + n);

    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << nam[i] << endl;
    }

    return 0;
}
