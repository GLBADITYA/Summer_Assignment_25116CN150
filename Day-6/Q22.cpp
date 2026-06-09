#include<iostream>
using namespace std;
int dtb(int n){
    int dig,pow=1,d=0;
    while(n>0){
        dig=n%2;
        n=n/2;
        d+=dig*pow;
        pow*=10;
    }
    return d;
}
int main(){
    int n,r;
    cout<<"Enter a number : ";
    cin>>n;
    r=dtb(n);
    cout<<"Decimal to binary : "<<r<<endl;
    return 0;
}