#include<iostream>
using namespace std;

int main()
{
    int arr[100]={10,20,30,30,30,30,40};
    int s=0;
    int end=6;
    int ans=0;
    int target=30;
    int mid=(s+end)/2;
    while(s<=end)
    {
        if(arr[mid]==30)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<30)
        {
            s=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(s+end)/2;
    }
    cout<<ans<<" ";
}