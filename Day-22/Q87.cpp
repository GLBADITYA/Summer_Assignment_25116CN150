#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    string str;
    cout<<"Enter string :";
    getline(cin,str);
    map<char,int>freq;
    for(char c:str){
        if(c!=' '){
            freq[c]++;

        }
    }
    cout<<"Character Frequencies : \n";
    for(auto it:freq){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;

}
