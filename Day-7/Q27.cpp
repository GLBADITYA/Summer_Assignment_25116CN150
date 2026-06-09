#include<iostream>
using namespace std;
int sumd(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sumd(n/10);
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"Sum of digits :"<<sumd(n)<<endl;
    return 0;
    
}