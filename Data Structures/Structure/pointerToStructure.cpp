#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r = {10, 5}; //consumes 4 bytes

    r.length = 15;

    struct Rectangle *p=&r; //pointer variable. consumes 2 bytes
    (*p).length = 20;
    p->length = 20;

    //creating an object dynamically
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=10;
    p->breadth=5;
}