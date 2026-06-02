#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n,lastdig,prod=1;
    cout<<"Enter the number\n";
    cin>>n;
    while(n>0){
        lastdig=n%10;
        n=n/10;
        prod*=lastdig;
    }
    cout<<"the product of digits is ="<<prod<<endl;
}
