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
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=a[i][j];
        }
        cout<<"sum for row "<<i<<" is "<<sum<<endl;

    }
    return 0;

}