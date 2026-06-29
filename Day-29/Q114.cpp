#include <iostream>
using namespace std;

int main() {
    int a[5], i, choice, sum = 0;

    cout << "Enter 5 elements: ";
    for(i = 0; i < 5; i++)
        cin >> a[i];

    cout << "\n1. Display\n2. Sum\n3. Largest\nEnter Choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            for(i = 0; i < 5; i++)
                cout << a[i] << " ";
            break;

        case 2:
            for(i = 0; i < 5; i++)
                sum += a[i];
            cout << "Sum = " << sum;
            break;

        case 3:
            int max = a[0];
            for(i = 1; i < 5; i++)
                if(a[i] > max)
                    max = a[i];
            cout << "Largest = " << max;
            break;

       
    }

    return 0;
}