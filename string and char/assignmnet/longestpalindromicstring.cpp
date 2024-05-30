#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="bababd";
    int i=0;
    int j=0;
    while(i<str.length() && j<str.length())
    {
        if(i<0 && j>str.length())
            break;
        i--;
        j++;
        if(check(str,i,j))
        {
            
        }
        
    }
}