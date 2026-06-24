#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    bool found = false;
    for(size_t i=0;i<str.length();i++){
        for(size_t j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                cout<<"First repeating character : "<<str[i]<<endl;
                found = true;
                break;
            }
        }
        if(found)
        break;
    }
    if(!found)
    cout<<"No repeating charactes found:";
    return 0;
}
