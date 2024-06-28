#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // I F   S T A T E M E N T S

    bool isStudent = false;
    bool isSmart = false;

    if (isStudent && isSmart)
    {
        cout << "You are a student" << endl;
    }
    else if (isStudent && !isSmart)
    {
        cout << "You are not a smart student" << endl;
    }
    else
    {
        cout << "You are not a student and not smart" << endl;
    }

    // >, <, >=, <=, !=, ==
    if (1 > 3)
    {
        cout << "Number comparision was true" << endl;
    }

    if ('a' > 'b')
    {
        cout << "Character comparision was true" << endl;
    }

    string myString = "cat";
    if (myString.compare("cat") == 0)
    {
        cout << "string comparison was true" << endl;
    }

    return 0;
}