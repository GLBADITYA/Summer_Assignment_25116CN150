#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string a,b;
    cout<<"enter two strings :";
    getline(cin,a);
    getline(cin,b);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b){
        cout<<"Strings are anagram ";

    }
    else
    cout<<"not anagram ";
    return 0;
}