#include <iostream>
using namespace std;

/*
struct rectangle
{
    int length;
    int breadth;
};
void initialise(struct rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}
int area(struct rectangle r)
{
    return r.length*r.breadth;
}
void changeLength(struct rectangle *r, int l){
    r->length=l;
}

int main(){
    struct rectangle r;
    initialise(&r, 10, 5);
    area(r);
    changeLength(&r, 20);
}
*/

class rectangle
{
private:
    int length;
    int breadth; 

public:
    rectangle (int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    void changeLength(int l)
    {
        length = l;
    }

    int main()
    {
        rectangle r(10,5);
        // r.initialise(10, 5);
        r.area();
        r.changeLength(20);
    }
};