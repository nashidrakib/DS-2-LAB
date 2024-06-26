#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 1)
    {
        return 2;
    }
    int firstNumber = 3+n-1;     // First number in the Nth term
    int secondNumber = 2*n; // Second number in the Nth term (2^(N-1))
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