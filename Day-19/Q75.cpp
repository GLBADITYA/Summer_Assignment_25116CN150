#include<iostream>
using namespace std;
int main(){
     int r,c;
    cout<<"enetr size of matrices :\n";
    cin>>r>>c;
    int a[r][c];
    cout<<"ENTER ELEMENTS : \n";
    for(int i = 0 ;i < r ; i++){
        for(int j =0 ; j < c; j++){
            cin>>a[i][j];
        }

    }   cout<<"TRANSPOSE : "<<endl;
        for(int i = 0 ;i < c ; i++){
        for(int j =0 ; j < r; j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}