#include <iostream>
#include <string>
using namespace std;

int main()
{

    // P O I N T E R S

    int num = 10;
                           
    cout << &num << endl; //printing num variable memory location. & -> address-of operator
    
    int *pNum = &num; //A pointer pNum of type int* is declared and initialized with the address of num. The int* indicates that pNum is a pointer to an integer.

    cout << pNum << endl; //The value of pNum is printed, which is the memory address where num is stored.

    cout << *pNum << endl; //The value pointed to by pNum is printed. The dereference operator * accesses the value stored at the address contained in pNum, which is 10.

    return 0;
}