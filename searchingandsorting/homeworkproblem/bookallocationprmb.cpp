#include<iostream>
using namespace std;

bool possible(int arr[10],int m,int mid)
{
    int count=1;
    int sum=0;
    for(int i=0;i<4;i++)
    {
        if(arr[i]>mid)
        {
            return false;
        }
        if(arr[i]+sum<=mid)
        {
            sum=sum+arr[i];
        }
        else
        {   
            sum=arr[i];
            count++;
            if(count>m)
            {
                return false;
            }
            
        }
    }
    return true;
}
int main()
{
    int arr[4]={12,34,67,90};
    int s=0;
    int sum=0;
    int m=2;
    for(int i=0;i<4;i++)
    {
        sum=sum+arr[i];
    }
    int e=sum;
    int ans;
    int mid=(e+s)/2;
    while(s<=e)
    {
        if(possible(arr,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(e+s)/2;
    }
    cout<<ans<<" ";
}