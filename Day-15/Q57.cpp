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
    cout<<"reverse is : "<<endl;
     for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;

}