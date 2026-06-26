#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int num=rand()%100+1;
    int guess;
    cout<<"Guess the number from (1 to 100 )\n";
    
    while(true){
        cin>>guess;
        if(guess>num)
        cout<<"HIGH , TRY AGAIN :\n";
        else if(guess<num)
        cout<<"SMALL , TRY AGAIN : \n";
        else{
        cout<<"CORRECT YOU GUESSED THE NUMBER ";
        break;
    }
}
return 0;

}
