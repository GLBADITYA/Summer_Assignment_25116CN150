#include<iostream>
using namespace std;
class Employee{
    int id;
    string name;
    float ss;
    public:
    void add(){
        cout<<"Enter employee id : \n";
        cin>>id;
        cout<<"Enter  name : \n";
        cin>>name;
        cout<<"Enter salary :\n";
        cin>>ss;

    }
    void display(){
        cout<<"\n  ID : "<<id;
        cout<<"\n  NAME : "<<name;
        cout<<"\n SALARY : "<<ss;
    }
};
int main(){
    Employee a;
    a.add();
    a.display();
    return 0;
    
}