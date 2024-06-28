/*
Write a recursion program which will find the sum until the Nth
term of the given series
1*2 + 4*4 + 7*8 + ….

Input   Output
2       18
1       2
*/

#include <iostream>
#include <cmath>
using namespace std;
int sum(int n)
{
    if (n == 1)
    {
        return (3 * 1 - 2) * pow(2, 1);
    }
    int firstNumber = 3 * n - 2;
    int secondNumber = pow(2, n);
    int currentTerm = firstNumber * secondNumber;

    return currentTerm + sum(n - 1);
}
int main()
{
    cout << "input n" << endl;
    int n;
    cin >> n;
    cout << sum(n) << endl;
}