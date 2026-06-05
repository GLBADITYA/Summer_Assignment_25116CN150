#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"Enter the number \n";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"its a perfect number ";
    }
    else{
        cout<<"not a perfect number\n";
    }
    return 0;
}