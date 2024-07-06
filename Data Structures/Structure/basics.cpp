//Structure -> defined as a collection of dissimilar data items under one name; grouping the data items
//used for -> user defined data types
#include <iostream>
#include <cstring>
using namespace std;

//rectanlge structure example
struct Rectangle
{
    int length; //2 bytes
    int breadth;//2 bytes
          //total 4 bytes
};

//Complex Number structure example
struct Complex
{
    int real; //2 bytes
    int img; // 2 bytes
};

//student structure example
struct student{
    int roll; //2 bytes
    char name[5]; // 5 bytes. characters take only 1 byte
    char dept[10]; // 10 bytes
    char address[50]; // 50 bytes
            //total 77 bytes
}; 

//playing card structure example
struct card{
    int face; //2 bytes
    int shape; //2 bytes
    int color; //2 bytes
        //total 6 bytes
};

int main()
{
    //declaration
    struct Rectangle R; //total 4 bytes, 2 bytes for length and 2 bytes for breadth

    //declaration + initialization
    struct Rectangle r={10,5};

    //access the members of a structure
    r.length = 15;
    r.breadth = 10;

    printf("area of a rectangle is %d \n",r.length*r.breadth);


    struct student s;
    s.roll = 10;
    //s.name = "John";
    strcpy(s.name, "John");


    struct card c;
    c.face = 1;
    c.shape = 0;
    c.color = 0;
    //struct card c = {1,0,0}; //declaration + initialization

    //array of structures
    // struct card deck[52]; //52*6 = 312 bytes
    struct card deck[52] = {{1,0,0},{2,0,0},{1,1,0},{2,1,0}}; //initializing the first 4 structures

    //accessing array of structures indivisually
    printf("face: %d \n", deck[0].face);
    printf("shape: %d \n", deck[0].shape);
}
