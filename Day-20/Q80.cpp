#include<iostream>
using namespace std;
int main(){
        int r,c;
    cout<<"Enter size: \n";
    cin>>r>>c;
    int a[r][c];
      cout<<"Enter elements in first matrix\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
            sum+=a[i][j];
        }
        cout<<"sum for column "<<j<<" is "<<sum<<endl;

    }
    return 0;

}