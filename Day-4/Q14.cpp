#include<iostream>
using namespace std;
int main(){
    int i,first=0,second=1,next,n;
    cout<<"enter the term which have to be find out\n";
    cin>>n;
    if(n==0){
        cout<<"Fibonacci term at postion 0 :"<<first<<endl;
    }
    else if(n==1){
        cout<<"Fibonacci term at postion 1 :"<<second<<endl;
    }
    else{
        for(i=2;i<n;i++){
            next=first+second;
            first=second;
            second=next;
        }
        cout<<"fibonacci term at "<<n<<"position :"<<second<<endl;
    }
    return 0;

}