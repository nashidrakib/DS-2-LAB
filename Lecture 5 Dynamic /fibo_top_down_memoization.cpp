#include<iostream>
#include<vector>
using namespace std;

int Fib(int n){
    int Fib[n+1],i;
    Fib[0]=0;
    Fib[1]=1;

    for (int i = 2; i <= n; i++)
    {
        Fib[i]=Fib[i-1]+Fib[i-2];
    }
    return Fib[n];
    
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<int> dp(n-1)
    if(n<=1)
        cout<<Fib[n]<<=<<n<<;
    else
        cout<<Fib[n]<<=<<n<<;
    cout<<endl;
}