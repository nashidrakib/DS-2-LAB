#include<iostream>
using namespace std;

string processed(string str){
    string filtered;
    for(char c : str){
        if(!isspace(c)){
            filtered += tolower(c);
        }
    }
    return filtered;
}

bool palindrome(string str, int i){
    if(i > str.size()/2){
        return true;
    }

    return str[i] == str[str.size()-i-1] && palindrome(str, i+1);
}

int main(){
    string str = "Too Bad";
    int i = 0;
    string processedStr = processed(str);
    if(palindrome(processedStr, i)){
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }

    return 0;
}