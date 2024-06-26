#include<iostream>
#include<string>
using namespace std;

int main(){
    /*
    Names are case-sensitive and may begin with:
        Letters, _
    After, may include
        Letters,Numbers,_
    Convention says
        Starts with a Lowercase word, then additional words are capital.
        ex. myFirstVariable
    */

   string name = "Mike";    // string of charecters, not primitative
   char testGrade = 'A';    // single 8-bit character

   // you can make them unsigned by adding "unsigned" prefix
   short age0 = 10;         // atLeast 16-bits signed integer
   int age1 = 20;           // atLeast 16-bits signed integer (not smaller than a short)
   long age2 = 30;          // atleast 32-bits signed integer
   long long age3 = 40;     // atLeast 64-bits signed integer

   float gpa0 = 2.5f;       // single percision floating point
   double gpa1 = 3.5;       // double-percision floating point
   long double gpa2 = 3.5;  // extended-precision floating point

   bool isTall;            // 1 bit -> true/false
   isTall = true;

   name = "John";

   cout << "Your name is" << name << endl;

   return 0;
}