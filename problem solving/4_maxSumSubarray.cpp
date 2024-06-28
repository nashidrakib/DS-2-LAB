// Finding Maximum Sum SubArray using Divide and Conquer Approach.
#include <iostream>
#include <climits>
using namespace std;

// brute force approach
// int maxSumSubarray(int arr[], int n)
// {
//     int ans = INT_MIN; //#include<climits> high negative value
//     for (int subArraySize = 1; subArraySize <= n; ++subArraySize)
//     {
//         for (int startIndex = 0; startIndex < n; ++startIndex)
//         {
//             if (startIndex + subArraySize > n) // subarray exceeds array bounds
//                 break;
//             int sum = 0;
//             sum+= arr[startIndex+subArraySize-1];
//             ans = max(ans, sum);
//         }
//     }
//     return ans;
// }

int maxSumSubarray(int a[], int size)
{
    if (size == 1)
    {
        return a[0];
    }
    int m = size / 2;
    int left_mss = maxSumSubarray(a, m);
    int right_mss = maxSumSubarray(a + m, size - m); // a+m ->mth element of arr as start address and number of elements
    int leftsum = INT_MIN, rightsum = INT_MIN, sum = 0;
    for (int i = m; i < size; i++)
    {
        sum += a[i];
        rightsum = max(rightsum, sum);
    }
    sum = 0;
    for (int i = (m - 1); i >= 0; i--)
    {
        sum += a[i];
        leftsum = max(leftsum, sum);
    }
    int ans = max(left_mss, right_mss);
    return max(ans, left_mss+right_mss);
}

int main()
{
    int a[] = {1, -3, 2, -5, 7, 6, -1, -4, 11, -23};
    int size = sizeof(a) / sizeof(a[0]);
    cout << maxSumSubarray(a, size) << endl;
}