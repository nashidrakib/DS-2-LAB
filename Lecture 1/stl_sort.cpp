#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[5] = {2, 1, 6, 4, 5};
//  ascending sort
// sort(a, a + 5);
//     a[0] a[5-1] 
 
   

// descending sort
    sort(a,a+5,greater<int>());
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
