#include <iostream>
#include"Bird.h"

using namespace std;

void show(Bird &obj)
{
    obj.fly();
    obj.eat();
}
int main() {
    Bird *obj1=new crow(); //this is the pointer of the abstract class
    show(*obj1); //this is the object of the abstract class


    return 0;
}
