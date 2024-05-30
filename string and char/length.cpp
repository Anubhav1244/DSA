#include<iostream>
using namespace std;

int main()
{
    char ch[100];
    cin>>ch;
    int len=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        len++;

    }
    cout<<len;
}