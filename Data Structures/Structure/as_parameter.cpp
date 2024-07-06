#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

struct test
{
    int a[5];
    int n; 
};

//call by value
void fun(struct test t1)
{
    t1.a[0]=10;
    t1.a[1]=9;
}

//call by reference
int area(struct rectangle &r1)
{
    r1.length++;
    return r1.length * r1.breadth;
} 

//call by address
void changeLength(struct rectangle *p, int l)
{
    p->length=l; 
}


int main()
{
    struct rectangle r = {10, 5};
    changeLength(&r,20);
    printf("%d\n", area(r));

    struct test t = {{2,4,6,8,10},5};
    fun(t);
}