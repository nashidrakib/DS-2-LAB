#include<iostream>
using namespace std;
int pow(int x, int y){
    if(y==0){
        return 1;
    }
    if(y==1){
        return x;
    }
    return x*pow(x,y-1);

}
int main(){
    int x = 5;
    int y = 5;
    cout<<pow(y,x)<<endl;

    return 0;
}