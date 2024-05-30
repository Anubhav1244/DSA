#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[100];
    cin.getline(ch,100);
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]=='@')
        {
            ch[i]=' ';
        }
    }
    cout<<ch;
}