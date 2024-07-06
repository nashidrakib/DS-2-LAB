//monolithic programming: writing all the code inside the main function

//modular/procedural programming: writing functions outside of the main function

#include<iostream>
using namespace std;

int add(int a, int b) //prototype/header or declaration of a function
//the body is called as definition/elaboration of a function 
{ 
    int c;
    c=a+b;
    return c;
}

int main(){
    int x,y,z;
    x=10;
    y=5;
    z=add(x,y); //function call
    printf("sum is %d",z);
}