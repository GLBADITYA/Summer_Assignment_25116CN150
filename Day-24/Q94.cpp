#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,res="";
    cin>>s;
    for(size_t i=0;i<s.size();i++){
        size_t count = 1;
        while(i + 1 < s.size() && s[i] == s[i+1]){
            count++;
            i++;
        }
        res += s[i];
        res += to_string(count);
    }
    cout<<res;
    return 0;
}