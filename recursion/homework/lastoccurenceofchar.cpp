#include<iostream>
using namespace std;
void lastoccurence(string str,char x,int index,int &ans)
{
    if(index<0)
    {
        return;
    }
    if(str[index]==x)
    {
        ans=index;
        return;

    }
    lastoccurence(str,x,index-1,ans);
    

}

int main()
{
    string str="anubhav";
    char x='a';
    int ans=-1;
    lastoccurence(str,x,6,ans);
    cout<<ans;

}