#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
   int arr[n];
    cout<<"enter the elements in array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int m1=arr[0];
    int m2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>m1){
            m2=m1;
            m1=arr[i];
        }
        else if(arr[i]>m2&&arr[i]<m1){
            m2=arr[i];
        }
    }
    cout<<"Second largest="<<m2;
    return 0;
}