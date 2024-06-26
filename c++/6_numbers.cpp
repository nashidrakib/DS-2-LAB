#include <iostream>
#include <string>
using namespace std;

int main()
{

    // N U M B E R S

    cout << 2 * 3 << endl;     // basic arithmetic: +, -, /, *
    cout << 10 % 3 << endl;    // Modulus Op. : returns remainder of 1
    cout << 1 + 2 * 3 << endl; // order of operators
    cout << 10 / 3.0 << endl;  // ints and doubles

    int num = 10;
    num += 100; // +=, -=, /=, *=
    cout << num << endl;

    num++;
    cout << num << endl;

    return 0;
}