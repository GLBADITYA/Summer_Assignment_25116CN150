#include<iostream>
using namespace std;
int main(){
    string name[5];
    int marks[5];
    for(int i=0;i<5;i++){
        cout<<"enter name and marks : ";
        cin>>name[i]>>marks[i];
    }
    cout<<"\n Students record \n";
      for(int i=0;i<5;i++){
       cout<<name[i]<<" - "<<marks[i]<<endl;
    }
    return 0;

}