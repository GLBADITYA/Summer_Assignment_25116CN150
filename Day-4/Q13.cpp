#include<iostream>
using namespace std;
int main(){
    int i,n,first=0,second=1,next;
    cout<<"enter the number of terms\n";
    cin>>n;
    cout<<"Fibonacci series : ";
    for(i=0;i<n;i++){
        if(i<=1){
            next=i;
        }
        else{
            next=first+second;
            first=second;
            second=next;
        }
        cout<<next<<" ";
         
    }
    cout<<endl;
    return 0;
}
