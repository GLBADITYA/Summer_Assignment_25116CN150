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
    cout<<endl;
    cout<<"LEFT ROTATED "<<endl;
      for(int i=1;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<a[0];
    return 0;
}


