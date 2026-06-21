#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements in array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int k=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[k])
            k=j;
        }
        int temp = a[i];
        a[i] = a[k];
        a[k] = temp;

    }
          cout<<" SORTED ARRAY \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}