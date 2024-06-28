/*
Reverse a string using a recursive method

Input    Output
Hello    olleH
Data     ataD
*/

#include <iostream>
using namespace std;

string reverse(string str)
{
    if (str.size() <= 1)
    {
        return str;
    }
    return reverse(str.substr(1)) + str[0];
}

int main()
{
    string str;
    cout << "Enter a String to reverse it ";
    cin >> str;
    cout << "reversed: " << reverse(str) << endl;
}