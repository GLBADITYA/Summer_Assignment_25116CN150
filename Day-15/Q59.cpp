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
    cout<<"OG ARRAY"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl<<"RIGHT ROTATED ";
    cout<<endl<<a[n-1]<<" ";
    
     for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";

    }
    return 0;
}

