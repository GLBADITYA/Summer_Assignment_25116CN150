#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n,c=0;
    cout<<"enter any number \n";
    cin>>n;
    while(n>0){
        n=n/10;
        c++;
    }
    cout<<"the number of digits are ="<<c;
    return 0;
}