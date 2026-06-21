#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enetr size of matrices :\n";
    cin>>r>>c;
    int a[r][c],b[r][c],s[r][c];
    cout<<"ENTER ELEMENTS : \n";
    for(int i = 0 ;i < r ; i++){
        for(int j =0 ; j < c; j++){
            cin>>a[i][j];
        }

    }
    cout<<"ENTER ELEMENTS : \n";
    for(int i = 0 ;i < r ; i++){
        for(int j =0 ; j < c; j++){
            cin>>b[i][j];
        }

    }
  
    for(int i = 0 ;i < r ; i++){
        for(int j =0 ; j < c; j++){
            s[i][j]=a[i][j]+b[i][j];
        }

    }
   
    cout<<"SUM OF ELEMENTS : \n";
    for(int i = 0 ;i < r ; i++){
        for(int j =0 ; j < c; j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}