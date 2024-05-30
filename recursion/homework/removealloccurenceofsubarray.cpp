#include<iostream>
#include<string>
using namespace std;
void remove(string &str,string part)
{
    if(str.find(part)==string::npos)
    {
        return;
    }
    if(str.find(part)!=string::npos)
    {
        str.erase(str.find(part),part.length());

    }
    remove(str,part);
}
int main()
{
    string part="bc";
    string str="abcaaabcdefabc";
    remove(str,part);
    cout<<str;

}
