// #include <iostream>
// using namespace std;

// void merge(int *arr, int l, int m, int r)
// {
//     int i, j, k, nl, nr;
//     nl = m - 1 + 1;
//     nr = r - m;
//     int larr[nl], rarr[nr];

//     for (i = 0; i < nl; i++)
//         larr[i] = arr[l + i];
//     for (j = 0; j < nr; j++)
//         rarr[j] = arr[m + 1 + j];

//     i = 0;
//     j = 0;
//     k = l;

//     while (i < nl && j < nr)
//     {
//         if (larr[i] <= rarr[j])
//         {
//             arr[k] = larr[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = rarr[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < nl)
//     {
//         arr[k] = larr[i];
//         i++;
//         k++;
//     }

//     while (j < nr)
//     {
//         arr[k] = rarr[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int *arr, int l, int r)
// {
//     if (l < r)
//     {
//         int m = l + (r - l) / 2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }

// int main()
// {
//     int arr[] = {5, 6, 12, 1, 9, 10};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     mergeSort(arr, 0, size - 1);
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }

// abdul bari merge sort
#include <iostream>
using namespace std;

void merge(int A[], int l, int mid, int r)
{
    int i = l, j = mid + 1, k = l;
    int B[100];
    while (i <= mid && j <= r)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= r; j++)
        B[k++] = A[j];
    for (i = l; i <= r; i++)
        A[i] = B[i];
}

void mergeSort(int a[], int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = (l + r) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main()
{
    int arr[] = {5, 6, 12, 1, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}