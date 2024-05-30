#include<iostream>
#include<vector>
// sieve of erothesis approach;
using namespace std;

int main()
{
    int n=21;
    int ans=0;
    vector<int>v(n,true);
    v[0]=v[1]=false;
    for(int i=2;i<=n-1;i++)
    {
        if(v[i])
        {
            ans++;

            int j=2*i;
            while(j<n)
            {
                v[j]=false;
                j+=i;
            }
        }
    }
    cout<<ans;

}
