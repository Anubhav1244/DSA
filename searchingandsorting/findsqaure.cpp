#include<iostream>
using namespace std;

int main()
{
    int n=25;
    int s=0;
    int e=n;
    int ans;
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(mid*mid<=n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    cout<<ans<<" ";
}