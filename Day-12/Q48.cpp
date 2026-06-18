#include<iostream>
using namespace std;
bool isPerfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }

    }
    return sum==n;
    
}
int main(){
    int num;
    cout<<"enter the number ";
    cin>>num;
    if(isPerfect(num)){
        cout<<"Perfect";
    }
    else{
        cout<<"Not Perfect";
    }
    return 0;
}