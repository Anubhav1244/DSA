#include<iostream>
using namespace std;

class Abc
{
    private:
        string gfname;

    public:
        int age;
    
        Abc(string name)
        {
            gfname=name;
        }
        void getter(string _gfname)
        {
            gfname=_gfname;
        }
        void setter()
        {
            cout<< gfname;
        }
    private:
        void gfchat()
        {
            cout<<"chating with gf";
        }
} ;

int main()
{

   Abc s1("hello");
    s1.setter();
    s1.age=10;
    
   
}