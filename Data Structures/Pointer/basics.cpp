//normal variables are data variables but pointers are address variables, pointers are used for indirectly accessing the data
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int a = 10; //data variable

    //declaration of a pointer variable
    int *p; //address variable

    //assignment or initialization
    p = &a;
    printf("%d", a); //10

    //dereferencing
    printf("%d", *p);

    //c lang
    p=(int *)malloc(5*sizeof(int)); //5*2 bytes total 10 bytes 

    //c++
    p=new int[5];
}