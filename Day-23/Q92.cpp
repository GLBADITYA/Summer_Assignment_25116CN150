#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int freq[256]={0};
    for(char c:str){
        freq[(int)c]++;
    }
    int maxFreq=0;
    char maxChar='\0';
      for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
    if(maxChar!='\0'){
        cout<<"Maximum occuring character : "<<maxChar<<" (occurs "<<maxFreq<<" times )"<<endl;
    }
    else{
        cout<<"STRING IS EMPTY "<<endl;
    }
    return 0;
}