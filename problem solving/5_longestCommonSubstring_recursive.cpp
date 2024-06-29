// longest common substring  recursion
#include <iostream>
using namespace std;

// creating global string variables x, y
string x, y;

int lcs(int i, int j, int count)
{

    // when i or j is == 0 we return count, since one or both strings have been traversed completely
    if (i == 0 || j == 0)
        return count;

    // If x[i-1] == y[j-1], it means characters match so the function calls itself with i-1,j-1 and count+1
    if (x[i - 1] == y[j - 1])
    {
        count = lcs(i - 1, j - 1, count + 1);
    }

    //compares the current count with the results of two additional recursive calls: lcs(i, j - 1, 0) and lcs(i - 1, j, 0). The goal is to ensure that count holds the maximum length of any common substring found so far.
    count = max(count, max(lcs(i, j - 1, 0), lcs(i - 1, j, 0)));
    return count;
}


int main()
{
    int n, m;
    x = "abcdxyz";
    y = "xyzabcd";

    // initializing the size of x and y string;
    n = x.size();
    m = y.size();

    // The function lcs takes three parameters: indices i and j for the strings x and y, and count to keep track of the current length of the common substring.
    cout << lcs(n, m, 0);
}