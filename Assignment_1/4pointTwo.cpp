/*
You are given a string s. Your task is to find all permutations of the string s and print each permutation on a new line.

Input Format:
The input contains a single string s.

Output Format:
Print each permutation of the string s on a new line.

Input   Output
DSA     DSA
        DAS
        SDA
        SAD
        ADS
        ASD
*/

#include <iostream>
#include <string>
using namespace std;

void permutation(string s, string answer)
{
    if (s.length() == 0)
    {
        cout << answer << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string left_substr = s.substr(0, i);
        string right_substr = s.substr(i + 1);
        string rest = left_substr + right_substr;
        permutation(rest, answer + ch);
    }
}

int main()
{
    cout<<"Enter a string: ";
    string s;
    cin>>s;
    string answer = "";
    permutation(s, answer);
    return 0;
}