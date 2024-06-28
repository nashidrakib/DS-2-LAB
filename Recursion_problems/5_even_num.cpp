#include<iostream>
using namespace std;
void evenNum(int L, int R){
    if(L > R){
        return;
    }

    if(L % 2 == 0){
        cout<< L <<" ";
        evenNum(L+2,R);
    } else {
        evenNum(L+1,R);
    }
}
int main(){
    int L = 3, R = 10;
    evenNum(L , R);
    cout << endl;

    return 0;
}