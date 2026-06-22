#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter string \n";
    getline(cin,s);
    int l=0;
    for(char c : s){
        l++;
        cout<<c<<" ";
    }
    cout<<"length is : "<<l;
    return 0;

}