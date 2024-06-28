/*
You are given a number N. Your task is to determine if the binary
representation of N is a palindrome.

Input Format:
The input contains a single integer N.

Output Format:
Print "YES" if the binary representation of N is a palindrome,
otherwise print "NO".

Input   Output
9       YES
4       NO
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toBinary(int n)
{
    string binary = "";
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            binary += '0';
        }
        else if (n % 2 == 1)
        {
            binary += '1';
        }
        n /= 2;
    }
    reverse(binary.begin(), binary.end());

    return binary;
}

bool toPalindrome(string s)
{
    int L = 0;
    int R = s.length() - 1;
    while (L < R)
    {
        if (s[L] != s[R])
        {
            return false;
        }
        L++;
        R--;
    }
    return true;
}

int main()
{
    int n;
    cout << "insert a number: ";
    cin >> n;

    // cout << "Binary is: " << toBinary(n) << endl;

    if (toPalindrome(toBinary(n)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}