#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    vector<string> words;
    string word;
    stringstream ss(str);


    while (ss >> word) {
        words.push_back(word);
    }


    sort(words.begin(), words.end(), [](const string &a, const string &b) {
        return a.size() < b.size();
    });

    cout << "\nWords sorted by length:\n";
    for (auto &w : words) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}
