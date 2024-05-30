#include<iostream>
using namespace std;

class bird{

    public:
        string color;
        int age;
        int wieght;

        void fly()
        {
            cout<<"flyoing";
        }
        void eating()
        {
            cout<<"eating";
        }
        void setter()
        {
            cout<<"enter the color";
            cin>>color;
        }
        void getter()
        {
            cout<<color;
        }

};

class sparrow : public bird
{
    public:
        string peack;
         void getter_sparrow()
         {
            cin>>peack;
         }


};
int main()
{
    sparrow s1;
    
    
    s1.setter();
    s1.getter();
}