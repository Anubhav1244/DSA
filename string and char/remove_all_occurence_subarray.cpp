/*
    i/p :- str->"abbcbaddcbabbbaae"
           part->"cba"
    o/p :-"abbddbbbaae"

*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string ch;
    cin>>ch;
    string part;
    cin>>part;
    ch.erase(ch.find(part));
    cout<<ch<<endl;
    cout<<ch.find(part);
}