#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[200];
    cin.getline(ch,100);
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]==' ') continue;
        else if(ch[i]>='a' && ch[i]<='z')
        {
            int value=((int)ch[i])-97+65;
            ch[i]=(char)value;
        }

    }
    cout<<ch;

}