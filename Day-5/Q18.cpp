#include<iostream>
using namespace std;
int fact(int no){
    int i,f=1;
    for(i=1;i<=no;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,dig,sum=0;
    cout<<"enter a number ";
    cin>>n;
    int check=n;
    while(n>0){
        dig=n%10;
        n=n/10;
        sum+=fact(dig);
    }
    if(sum==check){
        cout<<"strong number\n";

    }
    else{
        cout<<"not a strong number \n";

    }
    return 0;
}