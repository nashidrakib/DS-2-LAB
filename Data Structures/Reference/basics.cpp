//useful in parameter passing
#include<iostream>
using namespace std;

int main(){
    //data variable
    int a = 10;

    //reference variable, must be initialised when declared. two names for the same value in the memory
    int &r = a;

    cout<<a<<endl;
    r++;
    cout<<r<<endl;
    cout<<a<<endl;
}