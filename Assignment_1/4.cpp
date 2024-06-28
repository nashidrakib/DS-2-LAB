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

void permutation(string s, int L, int R)
{
    if (L == R)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = L; i <= R; i++)
        {
            swap(s[L], s[i]);
            permutation(s, L + 1, R);
            swap(s[L], s[i]);
        }
    }
}

int main()
{
    string s;
    cout<<"Enter A string: ";
    cin>>s;
    permutation(s, 0, s.size() - 1);

    return 0;
}