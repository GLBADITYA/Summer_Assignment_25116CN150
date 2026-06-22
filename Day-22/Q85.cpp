#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    string rev="";
    for(int i=str.size()-1;i>=0;i--){
        rev+=str[i];

    }
    if(rev==str){
        cout<<"PALINDROME \n";
    }
    else
    cout<<"NOT PALINDROME ";
    return 0;

}