#include<iostream>
using namespace std;
int main()
{
    string key="the lazy fox jump over the quick dog";
    string decode="vhibhu tsh";
    string ans;
    char start ='a';
    char mapping[280]={0};
    for(auto ch:key)
    {
        if(ch!=' ' && mapping[ch]==0)
        {
            mapping[ch]=start;
            start++;

        }
    }

    for(auto ch: decode)
    {
        if(ch==' ')
        {
            ans.push_back(' ');
        }
        else
        {
            ans.push_back(mapping[ch]);
        }
    }
    cout<<ans;
}