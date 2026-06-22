#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter string :";
    getline(cin,str);
    string result="";
    for(size_t i=0;i<str.size();i++){
        if(str[i]!=' '){
            result+=str[i];
        }
    }
    cout<<"result is : "<<result;
    return 0;
}