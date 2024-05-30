#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string>str;
    string ans="";
    int flag=0;
    str={"abcdefgh","abcd","abcde"};
    int i=0;
    while(true)
    {
        char curr_ch=0;
        for(auto it: str)
        {
            if(i>it.size())
            {
                curr_ch=0;
                break;
            }
            if(curr_ch==0)
            {
                curr_ch=it[i];
            }
            else if(it[i]!=curr_ch)
            {
                curr_ch=0;
                break;
            }
        }
        if(curr_ch==0)
        {
            break;
        }
        ans+=curr_ch;
        i++;
    }
    cout<<ans;
}