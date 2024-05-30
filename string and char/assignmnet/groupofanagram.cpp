#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main()
{
    string arr[6]={"eat","tea","tan","ate","nat","bat"};
    map<string,vector<string>>mp;
    vector<vector<string>>v;
    for(auto it:arr)
    {
        string s=it;
        sort(s.begin(),s.end());
        mp[s].push_back(it);

    }
    for(auto it_m:mp)
    {
        v.push_back(it_m.second);
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
    }
}