#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    stringstream ss(str);
    string word;
    int c=0;
    while(ss>>word){
        c++;
    }
    cout<<"Total words : "<<c;
    return 0;
}