#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    cout<<"enter elements :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cout<<"enter sum :";
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
    return 0;
}
