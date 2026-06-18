#include<iostream>
using namespace std;
bool isPalindrome(int n){
    int rev=0,temp=n;
    while(temp>0){
        rev=rev*10+temp%10;
        temp/=10;
    }
    return n==rev;
}
int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    if(isPalindrome(num)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
    
}