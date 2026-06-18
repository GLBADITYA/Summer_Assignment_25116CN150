#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"enter the size of array ";
    cin>>n;
    cout<<"enter the number to be searched"<<endl;
    cin>>num;
   int arr[n];
    cout<<"enter the elements in array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int f=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            f++;
        }
    }
    cout<<"Frequency is = "<<f;
    return 0;
}