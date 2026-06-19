#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int a[n];
    cout<<"enter elements in array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n],k=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            b[k++]=a[i];
        }
    }
    while(k<n){
        b[k++]=0;
    }
     for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
