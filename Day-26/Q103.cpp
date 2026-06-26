#include<iostream>
using namespace std;
int main(){
    int ch;
    double bal = 1000.00;
    double amt;
   
        cout<<"\n ATM MENU "<<endl;
        cout<<"1. CHECK BALANCE "<<endl;
        cout<<"2. DEPOSIT MONEY "<<endl;
        cout<<"3. WITHDRAW MONEY "<<endl;
        cout<<"4. EXIT "<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;

        switch(ch){
            case 1 : 
                    cout<<"Your Balance is : "<<bal<<endl;
                    break;
            
            case 2 : 
                    cout<<"Enter amount to deposit : ";
                    cin>>amt;
                    if(amt>0){
                        bal+=amt;
                        cout<<" Deposited , new balace is : "<<bal<<endl;

                    }
                    else
                    cout<<"Invalid Amount "<<endl;
                    break;
            
            case 3 : 
                        cout << "Enter amount to withdraw: ";
                cin >> amt;
                if (amt > 0 && amt <= bal) {
                    bal -= amt;
                    cout << "Withdrawal successful. New balance: " << bal << endl;
                } else {
                    cout << "Insufficient balance or invalid amount." << endl;
                }
                break;        
            case 4 : 
                    cout<<"THANK YOU FOR USING ATM "<<endl;
                    break;
            
            default : 
                        cout<<"INVALID CHOICE ";        
        }


   
    return 0;
}