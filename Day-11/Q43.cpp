#include<iostream>
using namespace std;
bool isprime(int no){
    if(no<=1){
        return false;
    }
    for(int i=2;i<=no/2;i++){
        if(no%i==0){
            return false;
        }

    }
    return true;
}
int main(){
int num;
cout<<"Enter a number :";
cin>>num;
if(isprime(num)){
    cout<<"Prime ";
}
else{
    cout<<"Not Prime ";
}

return 0;
}