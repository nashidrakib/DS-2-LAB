#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    vector<int> v; //vector declaration
    
    
    cout<<"initial size: "<< v.size() << endl; //printing vector size 

    v.push_back(1); //insert a value in vector v
    v.push_back(2);
    v.push_back(3);
    
    // cout<< v.size() << endl;
    // cout<< v[2] << endl;

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" "; 
    // }
    // cout<<endl;

    // v.begin() //starting index
    // v.end() //last index

    for (auto i = v.begin(); i<v.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;
    cout<<"size: "<< v.size() << endl;
    

    // for(int elem : v){
    //     cout <<" " << elem;
    // }


    //v.begin()+1 //finding index 1
    //v.begin()+5 //finding index 5

    v.erase(v.begin()+1); //
    //v.end()

    for (auto i = v.begin(); i<v.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;
    cout<<"size: "<< v.size() << endl;

    v.insert(v.begin()+2, 5); //inserting 5 in index 3
    cout<<v.size()<<endl;
    for (auto i = v.begin(); i<v.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),greater<int>()); //sorting in descending order
    for (auto i = v.begin(); i<v.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;

    //* vector<int> v(5, 100); //initializing a vector v with 5 with initial value of 100

}
