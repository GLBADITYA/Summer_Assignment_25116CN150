#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter size of both array :";
    cin>>n>>m;
    int a[n],b[m];
    cout<<"enter elements in array 1:\n";
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
     cout<<"enter elements in array 2:\n";
    for(int i =0;i<m;i++){
        cin>>b[i];
    }
    int c[n+m],k=0;
    for(int i=0;i<n;i++){
        c[k++]=a[i];
    }
    for(int i=0;i<m;i++){
        c[k++]=b[i];
    }
        for(int i=0;i<n+m;i++){
            cout<<c[i]<<" ";
        }
        return 0;
}