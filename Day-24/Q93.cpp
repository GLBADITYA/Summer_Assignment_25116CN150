#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cout<<"Enter two strings : ";
    cin>>a>>b;
    if(a.size()==b.size() && (a+a).find(b)!=string::npos ){
        cout<<"rotation of each other ";
    }
    else
    cout<<"not the rotation ";
    return 0;
}