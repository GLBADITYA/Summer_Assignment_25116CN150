#include<iostream>
using namespace std;
class Cont {
    string name ,ph;
    public:
    void add(){
        cout<<"Enter name : ";
        getline(cin,name);
        cout<<"Enter phone number ";
        getline(cin,ph);
    }
    void display(){
        cout<<"\n CONTACT DETAILS ";
        cout<<" \n NAME : "<<name;
        cout<<"\n PHONE NUMBER : "<<ph;
    }

};
int main(){
    Cont s;
    s.add();
    s.display();
    return 0;
    
}