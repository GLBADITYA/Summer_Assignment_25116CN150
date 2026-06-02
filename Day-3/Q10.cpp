#include<iostream>
using namespace std;
int main(){
    int i,j,f,n;
    cout<<"Enter the number \n";
    cin>>n;
    for(i=2;i<=n;i++){
        f=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                f++;
                break;
            }
        }
        if(f==0)
        cout<<i<<"\t";
    }
    return 0;
}