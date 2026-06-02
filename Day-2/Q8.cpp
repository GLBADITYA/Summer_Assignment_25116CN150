#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,rev=0,lastdig,no;
    cout<<"enter the number \n";
    cin>>n;
    no=n;
    while(n>0){
        lastdig=n%10;
        n=n/10;
        rev=rev*10+lastdig;
    }
    if(rev==no){
        cout<<"the number is plaindrome ";
    }
    else{
        cout<<"the number is not palindrome";
    }
    return 0;
}