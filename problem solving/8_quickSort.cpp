#include <iostream>
using namespace std;
int partition(int a[], int l, int r)
{
    int pivot = a[r];
    int i = l - 1;
    for (int j = l; j <= r - 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return (i + 1);
}

void quickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(a, l, r); // partitioning index
        quickSort(a, l, pi - 1);
        quickSort(a, pi + l, r);
    }
}

int main()
{
    int arr[] = {38, 27, 43, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}