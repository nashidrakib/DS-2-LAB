#include <iostream>
#include <string>
using namespace std;

int main()
{
    // U S E R   I N P U T

    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello" << name << endl;

    int num1, num2;
    cout << "Enter first num: ";
    cin >> num1;
    cout << "Enter second num: ";
    cin >> num2;
    cout << "Answer: " << num1 + num2 << endl;

    return 0;
}