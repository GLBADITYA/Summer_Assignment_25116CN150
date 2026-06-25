#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,res="";
    cout<<"Enter a string : ";
    getline(cin,str);
    for(size_t i=0;i<str.size();i++){
        bool f = false;
        for(size_t j=0;j<res.size();j++){
            if(str[i]==res[j]){
                f=true;
                break;
            }
        }
        if(!f)
        res+=str[i];
    }
    cout<<"string without dublicates :"<<endl<<res;
    return 0;
}