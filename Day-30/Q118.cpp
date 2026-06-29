#include<iostream>
using namespace std;
class Library{
    int bID;
    string bNAME;
    public:
    void add(){
        cout<<"Enter book id : \n";
        cin>>bID;
        cout<<"Enter book name : \n";
        cin>>bNAME;
    }
    void display(){
        cout<<"\n BOOK ID : "<<bID;
        cout<<"\n BOOK NAME : "<<bNAME; 
    }
};
int main(){
    Library a;
    a.add();
    a.display();
    return 0;
    
}