//when you don't have to modify actual parameters and if the function is returning some results, you can use pass by value

/*
//call by address:
#include<iostream>
using namespace std;
void swap(int *x,int * y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    a = 10;
    b = 20;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}
*/


//call by reference:
#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int a,b;
    a = 10;
    b = 20;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}