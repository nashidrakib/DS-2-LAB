//arrays can only be passed by address
#include<iostream>
using namespace std;

/*
//here array is passed by address and int n is passed by value. it can be written as an integer pointer like this 'void fun(int *a, int n)' as well
void fun(int a[], int n){
    int i;
    for(int i = 0; i<n; i++){
        printf("%d", a[i]);
    }
}

int main(){
    int a[5] = {2,4,6,8,10};
    fun(a,5);
}
*/

//returned by array
int * fun(int n) //this can be used in c: int [] fun(int n)
{
    int *p;
    p=(int *)malloc(n*sizeof(int));
    return (p);
}
int main()
{
    int *a;
    a=fun(5);
}