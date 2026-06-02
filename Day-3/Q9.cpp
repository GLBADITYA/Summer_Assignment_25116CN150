#include<iostream>
using namespace std;
int main(){
    int i,n,f=0;
    cout<<"enter the number \n";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            f++;
            break;
        }

    }
    if(f!=1){
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number\n";
    }
    return 0;
}