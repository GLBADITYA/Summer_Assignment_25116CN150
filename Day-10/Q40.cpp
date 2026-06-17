#include<iostream>
using namespace std;
int main(){
        int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j='A';j<'A'+i;j++){
            cout<<(char)j;
        }
        for(int j='A'+i-2;j>='A';j--){
            cout<<(char)j;
        }
        cout<<" "<<endl;
    }
    return 0;
}