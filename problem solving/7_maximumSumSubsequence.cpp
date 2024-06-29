// maximum sum subsequence
#include <iostream>
#include <algorithm>
using namespace std;

int mss(int arr[], int size)
{

    int sum = 0;

    // Find the maximum element in the array
    int max = *max_element(arr, arr+size);

    // If the maximum element is less than or equal to 0, return it
    if (max <= 0)
        return max;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {-2, 11, -4, 2, -3, -10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << mss(arr, size);
}