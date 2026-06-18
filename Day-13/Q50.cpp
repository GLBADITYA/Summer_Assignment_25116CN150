#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum = "<<sum<<endl<<"Average ="<<(float)sum/n;
    return 0;
}