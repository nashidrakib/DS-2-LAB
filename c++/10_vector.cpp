#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // V E C T O R

    vector<string> friends;
    friends.push_back("oscar");
    friends.push_back("Angela");
    friends.push_back("Kevin");
    friends.insert(friends.begin() + 1, "Jim");

    // freinds.erase(freinds.begin()+1);
    cout << friends.at(0) << endl;
    cout << friends.at(1) << endl;
    cout << friends.at(2) << endl;
    cout << friends.size() << endl;

    return 0;
}