#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter a number :";
    cin>>n;
    cout<<"factors of a given number are : ";
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";

        }
    }
    return 0;
}