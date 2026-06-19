#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Array without duplicates: ";
    for (int i = 0; i < n; i++) {
        bool seen = false;
        for (int j = 0; j < i; j++) {   
            if (a[i] == a[j]) {
                seen = true;
                break;
            }
        }
        if (!seen) {
            cout << a[i] << " ";
        }
    }
    return 0;
}