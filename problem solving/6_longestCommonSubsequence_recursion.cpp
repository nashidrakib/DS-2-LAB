// longest common subsequence  recursion
#include <iostream>
using namespace std;

// creating global string variables x, y
string x, y;

int lcs(int i, int j)
{   // Base case: if we reach the end of either string, return 0
    if (i == x.size() || j == y.size())
        return 0;
    
    // If characters match, increment the count and continue with next characters
    else if (x[i] == y[j])
        return 1 + lcs(i + 1, j + 1);
        
    // If characters don't match, find the maximum by either skipping a character in x or y
    else
        return max(lcs(i + 1, j), lcs(i, j + 1));
}

int main()
{
    x = "abcdxyz";
    y = "xyzabcd";

    cout << lcs(0, 0);
}