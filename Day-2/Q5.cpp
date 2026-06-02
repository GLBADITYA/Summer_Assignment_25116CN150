#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,lastdig,sum=0;
    cout<<"enter the number\n";
    cin>>n;
    while(n>0){
        lastdig=n%10;
        n=n/10;
        sum=sum+lastdig;

    }
    cout<<"the sum of digits is = "<<sum<<endl;
    return 0;
}