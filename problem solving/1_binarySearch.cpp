#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int l = 0, r = size - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = {6, 8, 12, 14, 17, 25, 29, 31, 36, 42, 47, 53, 55, 62};
    int target = 12;
    int foundAt;
    int size = sizeof(array) / sizeof(array[0]);
    foundAt = binarySearch(array, size, target);
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