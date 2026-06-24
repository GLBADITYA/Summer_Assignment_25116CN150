#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    bool found = false;
    for (size_t i= 0; i < str.length(); i++) {
        bool repeat = false;
        for (size_t j = 0; j < str.length(); j++) {
            if (i != j && str[i] == str[j]) {
                repeat = true;
                break;
            }
        }        
    
    if (!repeat)
    {
        cout<<"First non repeating character : "<<str[i]<<endl;
        found = true;
        break;
    }
}
if(!found){
    cout << "No non-repeating character found." << endl;
}
return 0;
}

    