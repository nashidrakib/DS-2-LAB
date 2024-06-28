#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // S W I T C H   S T A T E M E N T S

    char myGrade = 'A';
    switch (myGrade)
    {
    case 'A':
        cout << "You Pass" << endl;
        break;
    case 'F':
        cout << "You fail" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
    }

    return 0;
}