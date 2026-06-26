#include <iostream>
#include <string>
using namespace std;

int main() {
    int sc = 0;
    string ans;

    cout << "Welcome to the Quiz!" << endl;
    cout << "---------------------" << endl;

    cout << "Q1: What is the capital of India?" << endl;
    cout << "a) Mumbai\nb) Delhi\nc) Kolkata\nd) Chennai" << endl;
    cout << "Your answer: ";
    cin >> ans;
    if (ans=="b"||ans=="Delhi"||ans=="delhi") {
        cout << "Correct!\n";
        sc++;
    } else {
        cout << "Wrong! The correct answer is Delhi.\n";
    }

    cout << "\nQ2: Which language is used to write system software?" << endl;
    cout << "a) Python\nb) Java\nc) C\nd) HTML" << endl;
    cout << "Your answer: ";
    cin >> ans;
    if (ans == "c" || ans == "C") {
        cout << "Correct!\n";
        sc++;
    } else {
        cout << "Wrong! The correct answer is C.\n";
    }

 
    cout << "\nQ3: Who developed the theory of relativity?" << endl;
    cout << "a) Isaac Newton\nb) Albert Einstein\nc) Galileo Galilei\nd) Nikola Tesla" << endl;
    cout << "Your answer: ";
    cin >> ans;
    if (ans == "b" || ans == "Einstein" || ans == "einstein") {
        cout << "Correct!\n";
        sc++;
    } else {
        cout << "Wrong! The correct answer is Albert Einstein.\n";
    }

    
    cout << "\nQuiz Over! Your score is: " << sc << "/3" << endl;

    return 0;
}
