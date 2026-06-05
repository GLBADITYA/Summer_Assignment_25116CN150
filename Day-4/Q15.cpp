#include<iostream>
using namespace std;
int armsno(int n){
    int dig,prod=1,sum=0;
    while(n>0){
        dig=n%10;
        n=n/10;
        prod=dig*dig*dig;
        sum+=prod;
    }
    return sum;

}
int main(){
    int n;
    cout<<"enter a number :\n";
    cin>>n;
    int r=armsno(n);
    if(r==n){
        cout<<"ITS ARMSTRONG NUMBER"<<endl;
    }
    else{
        cout<<"NOT ARMSTRONG NUMBER "<<endl;
    }
    return 0;
}