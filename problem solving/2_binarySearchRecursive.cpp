#include <iostream>
using namespace std;

int binarySearch(int a[], int l, int r, int key)
{
    if (l == r)
    {
        if (a[l] == key)
            return l;
        else
            return -1;
    }
    else
    {
        int mid = (l + r) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return binarySearch(a, l, mid - 1, key);
        else
            return binarySearch(a, mid + 1, r, key);
    }
}
int main()
{
    int array[] = {6, 8, 12, 14, 17, 25, 29, 31, 36, 42, 47, 53, 55, 62};
    int target = 17;
    int foundAt;
    int size = sizeof(array) / sizeof(array[0]);
    foundAt = binarySearch(array, 0, size, target);
    if (foundAt != -1)
    {
        cout << "found at index: " << foundAt << endl;
    }
    else
    {
        cout << "target not found" << endl;
    }

    return 0;
}