#include<iostream>
using namespace std;
int main(){
    int x,b,r=1;
    cout<<"enter an number ";
    cin>>x;
    cout<<"enter the power "<<endl;
    cin>>b;
    for(int i=0;i<b;i++){
        r*=x;
    }
    cout<<"the ans is :"<<r;
    return 0;
}