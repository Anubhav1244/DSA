#include<iostream>
using namespace std;
void checkpalindrome(string str,int s,int e)
{
    
    if(str[s]!=str[e])
    {
        cout<<"no";
        return;
    }
    if(s>=e)
    {
        cout<<"yes";
        return;
    }
    checkpalindrome(str,s+1,e-1);

}
int main()
{
    string str="anubhav";
    checkpalindrome(str,0,6);
}