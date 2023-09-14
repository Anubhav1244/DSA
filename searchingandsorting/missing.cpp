#include<iostream>
using namespace std;

int main()
{
    int arr[100]={1,2,3,4,6,7,8};
    int start=0;
    int end=6;
    int mid=(start+end)/2;
    int ans=0;
    while(start<=end)
    {
        if(arr[mid]==mid+1)
        {
            start=mid+1;
        }
        else
        {
            ans=mid;
            end=mid-1;
          }
          mid=(start+end)/2;
    }
    cout<<ans+1<<" ";
}