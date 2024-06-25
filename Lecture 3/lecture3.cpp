// Binary search
// #include<iostream>
// using namespace std;
// int binarySearch(int arr,int left, int right, int key){
//     if(left <= right){
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == key) {
//             return mid;
//         }
//         if (arr[mid] > key) {
//             return binarySearch(arr, left, mid - 1, key);
//         }
//         return binarySearch(arr, mid + 1, right, key);
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"enter key"<<endl;
//     int key;
//     cin>>key;
//     cout<<"key lies in index"<<binarySearch(arr[n], 0, n, key);
//     return 0;
// }





//Merge sort
// #include<iostream>
// using namespace std;

// void merge(int *arr, int l, int m, int r){
//     int i, j, k, nl, nr;
//     nl = m-l+1;
//     nr = r-m;
//     int larr[nl], rarr[nr];

//     for(i = 0; i<nl; i++)
//         larr[i] = arr[l+i];
//     for(j = 0; j<nr; j++)
//         rarr[j] = arr[m+1+j];

//     i = 0; 
//     j = 0; 
//     k = l;

//     while(i < nl && j < nr){
//         if(larr[i] <= rarr[j]){
//             arr[k] = larr[i];
//             i++;
//         }
//         else{
//             arr[k] = rarr[j];
//             j++;
//         }
//         k++;
//     }

//     while(i<nl){
//         arr[k] = larr[i];
//         i++;
//         k++;
//     }

//     while(j<nr){
//         arr[k] = rarr[j];
//         j++;
//         k++;
//     }
// }
// void mergeSort(int *arr, int l, int r){
//     if(l < r){
//         int m = l+(r-l)/2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m+1, r);
//         merge(arr, l, m, r);
//     }
// }


// int main() {
//     int arr[] = {5, 6, 12, 1, 9, 10};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     mergeSort(arr, 0, size - 1);  

//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// binary search
// merge sort
// quick sort
// maximum sum subarray
// longest common prefix of n strings
// closest pair or points 
// leetcode divide and conquer
// divide and conquer binary search problems 
// geeks for geeks

//CT divide and conquer
// longest nice substring leetcode