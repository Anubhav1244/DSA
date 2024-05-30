#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[100];
    cin.getline(ch,100);
    int flag=0;
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]!=ch[strlen(ch)-1-i])
        {
            cout<<"no";
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"yes";
}