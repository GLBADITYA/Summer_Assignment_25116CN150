#include<iostream>
using namespace std;
int btd(int n){
    int dig,pow=1,b=0;
    while(n>0){
        dig=n%10;
        b+=dig*pow;
         n=n/10;
        pow*=2;
    }
    return b;

}
int main (){
    int n,r;
    cout<<"enter a number ";
    cin>>n;
    r=btd(n);
    cout<<"Binary to Decimal : "<<r<<endl;
    return 0;
}