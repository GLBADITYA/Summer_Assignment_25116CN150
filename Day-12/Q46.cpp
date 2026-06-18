#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int sum=0,temp=n,dig;
    while(temp>0){
        dig=temp%10;
        temp/=10;
        sum=sum+dig*dig*dig;

    }
    return sum==n;

}
int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    if(isArmstrong(num)){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
    return 0;
    
}
