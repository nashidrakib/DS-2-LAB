#include<iostream>
using namespace std;
int main(){
    //declaring an array of size 5
    int A[5];
    
    //declaring and initializing an array of size 5 with values
    int B[5] = {2,4,6,8,10};

    //scanning through the list of elements in an array
    for(int i = 0; i<5; i++){
        printf("%d",B[i]);
        printf(" ");
    }
}