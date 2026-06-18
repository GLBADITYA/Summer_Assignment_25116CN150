#include<iostream>
using namespace std;
int maximum(int a,int b){
    return (a>b)?a:b;
}
int main(){
int a,b;
cout<<"Enter two numbers :";
cin>>a>>b;
cout<<"Maximum is  =  "<<maximum(a,b)<<endl;
return 0;
}