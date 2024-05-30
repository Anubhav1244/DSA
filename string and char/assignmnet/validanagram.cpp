#include<iostream>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

// int main()
// {
//     //sorting technique;
//     string s="anagram";
//     string t="nagar";
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());
//     if(s==t)
//     {
//         cout<<true;
//     }
//     else
//     {
//         cout<<false;
//     }
// }

int freqofstr(char a,string str)
{
    map<char,int>mp;
    for(auto it:str)
    {
        mp[it]++;
    }
    return mp[a];

}

int main()
{
    //counting technqui
    string str="anagram";
    string str2="nagara";
    for(auto it:str)
    {
        if(freqofstr(it,str)!=freqofstr(it,str2))
        {
            cout<<false;
        }
    }
    cout<<true;
    
    
}