#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, res = "";
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    for (size_t i = 0; i < s1.size(); i++) {

        if (s2.find(s1[i]) != string::npos) {
         
            if (res.find(s1[i]) == string::npos) {
                res += s1[i];
            }
        }
    }

    if (res.empty())
        cout << "No common characters" << endl;
    else
        cout << "Common characters: " << res << endl;

    return 0;
}
