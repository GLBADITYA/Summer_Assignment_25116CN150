#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age>=18){
        cout<<"YOU ARE ELIGIBLE TO VOTE ";
    }
    else {
        cout<<"YOU ARE NOT ELIGIBLE TO VOTE\n ";
        cout<<"YOU WILL BE ELIGIBLE AFTER "<<18-age<<" years ";
    }
    return 0;
}