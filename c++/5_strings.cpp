#include <iostream>
#include <string>
using namespace std;

int main()
{

    // S T R I N G S

    string greeting = "Hello";
    //     indexes:    01234

    //c++ string functions, some of many
    cout << greeting.length() << endl;

    cout << greeting[0] << endl;

    cout << greeting.find("llo") << endl;

    cout << greeting.substr(1) << endl;

    cout << greeting.substr(2, 3) << endl;

    return 0;
}