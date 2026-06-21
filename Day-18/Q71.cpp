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
    int no;
    cout<<"Enter to be searched : ";
    cin>>no;
    int st=0,ed=n-1,f=-1;
    while(st<=ed){
        int mid=(st+ed)/2;
        if(a[mid]==no){
            f=mid;
            break;

        }
        else if(a[mid]<no){
            st=mid+1;
        }
        else{
            ed=mid-1;
        }
    }
    if(f!=-1){
        cout<<"Found at index : "<<f;
    }
    else{
        cout<<"not found ";
    }
    return 0;

}