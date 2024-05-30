#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    vector<int>v={12,16,22,30,35,39,42, 45,48,50,53,55,56};
    int x=35;
    int l=4;
    map<int ,int >m;
    for(auto it:v)
    {
        m[it]=abs(it-x);
    }
    // for(auto it:m)
    // {
    //     cout<<it.first<<" "<<it.second<<" ";
    // }
    int i=0;
    int h=v.size()-1;
    while((h-i)+1!=l)
    {
        
        if(m[v[i]]>m[v[h]])
        {
            i++;
        }
        else
        {
            h--;
        }
    }
    for(int k=i;k<=h;k++)
    {
        cout<<v[k]<<" ";
    }

}