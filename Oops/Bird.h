
#if !defined(BIRD_H)
#define BIRD_H
using namespace std;
#include <iostream>
class Bird  //this is the abstract class behave as interface
{   
    public:
       
      virtual  void fly()=0;
      virtual  void eat()=0;

      //this is a pure virtual function
      //it became the abstract class
        
    
};
class sparrow:public Bird  
{
    public:
    void fly()
    {
        cout<<"sparrow is flying"<<endl;
    }
    void eat()
    {
        cout<<"sparrow is eating"<<endl;
    }
};
class crow:public Bird
{
    public:
    void fly()
    {
        cout<<"crow is flying faster"<<endl;
    }
    void eat()
    {
        cout<<"crow is eating fast"<<endl;
    }
};

#endif // BIRD_H
