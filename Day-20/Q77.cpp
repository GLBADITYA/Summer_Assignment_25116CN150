#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<" Enter size of both matrices :";
    cin>>r1>>c1>>r2>>c2;
    int a[r1][c1],b[r2][c2],m[r1][c2];
    cout<<"Enter elements in first matrix\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements in second matrix\n";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++) {
            m[i][j]=0;
            for(int k=0;k<c1;k++)
                m[i][j]+=a[i][k]*b[k][j];
        }
    }
    cout<<"AFTER MULTIPLICATION : \n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
        cout<<m[i][j]<<" ";
        cout<<endl;
        }
    return 0;

}

