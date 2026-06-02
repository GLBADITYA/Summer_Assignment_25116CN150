#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,lastdig,rev=0;
    cout<<"Enter the number \n";
    cin>>n;
    while(n>0){
        lastdig=n%10;
        n=n/10;
        rev=rev*10+lastdig;
    }
    cout<<"The reverse of the number is = "<<rev<<endl;
    return 0;
}