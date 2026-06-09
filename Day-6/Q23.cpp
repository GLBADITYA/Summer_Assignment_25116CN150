#include<iostream>
using namespace std;
int sob(int n){
    int dig,c=0;
    while(n>0){
        dig=n%2;
        n=n/2;
        if(dig==1){
            c++;
        }
    }
    return c;

}
int main(){
    int n,r;
    cout<<"enter a number ";
    cin>>n;
    r=sob(n);
    cout<<"THE NUM OF SETS BITS IS :"<<r<<endl;
    return 0;
}