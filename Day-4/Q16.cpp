#include<iostream>
using namespace std;
int armsno(int n){
    int i,dig,no,sum;
    for(i=1;i<n;i++){
        no=i;
        sum=0;
        while(no>0){
            dig=no%10;
            sum+=dig*dig*dig;
             no=no/10;
            
        }
        if(i==sum){
            cout<<sum<<" ";
        }
    }
return 0;
}
int main(){
    int n;
    cout<<"enter a number\n";
    cin>>n;
    armsno(n);
    return 0;
}