#include<iostream>
using namespace std;

int main()
{
    int nums[100]={1,4,2};
        int sum=0;
        int n=4;
        int actual=(n*(n+1))/2;
        for(int i=0;i<4;i++)
        {
            sum=sum+nums[i];
        }
        int ans=actual-sum;
        cout<<ans<<" ";
}