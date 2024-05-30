#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
// two pointer approach
using namespace std;
int main()
{

    vector<int> arr={1,1,1,1,1};
    int k=0;
    set<pair<int,int>>ans;
    //find the pair of the number from the array whose difference is equal to k;

    int i=0;
    int j=1;
    sort(arr.begin(),arr.end());

    while( j<arr.size())
    {
        int diff=arr[j]-arr[i];
        if(diff==k)
        {
            
            pair<int,int> x=make_pair(arr[i],arr[j]);
            ans.insert(x);
            i++;
            j++;

        }
        if(diff>k)
        {
            i++;
        }
        else
        {
            j++;
        }
        if(i==j)j++;
    }
    for(auto i:ans)
    {
        cout<<'('<<i.first<<','<<i.second<<')';
    }
}