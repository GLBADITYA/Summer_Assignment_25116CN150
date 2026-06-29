#include<iostream>
using namespace std;
class tickt{
    string nam;
    int st;
    double payment;
    public:
    void book(){
        cout<<"Enter name : ";
       getline(cin,nam);
        
        cout<<"Enter number of seats : ";
        cin>>st;
        cout<<"Payment of 500.23/-";
        cin>>payment;
    }
    void display(){
        cout<<"\n BOOKING CONFIRMED ";
        cout<<" \n NAME = "<<nam;
        cout<<"\n SEATS ARE "<<st<<endl;
    }
};
int main(){
    tickt t;
    t.book();
    t.display();
    return 0;
}