#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mf=0,el=a[0];
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c>mf){
            mf=c;
            el=a[i];
        }

    }
    cout<<endl<<"maximum frequency : "<<el;
    return 0;


}
