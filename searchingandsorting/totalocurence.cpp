#include<iostream>
#include<vector>
using namespace std;
 int firstoccurence(int arr[],int n,int x)
    {
        int s=0;
        int e=n-1;
        int mid=(e+s)/2;
        int ans=-1;
        while(s<=e)
    {
        if(arr[mid]==x)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<x)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
        return ans;
    }
    int lastoccurence(int arr[],int n,int x)
    {
        int s=0;
        int e=n-1;
        int mid=(s+e)/2;
        int ans=-1;
        while(s<=e)
        {
            if(arr[mid]==x)
            {
                ans=mid;
                e=mid-1;
            }
            else if(arr[mid]>x)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            mid=(e+s)/2;
            
        }
        return ans;
    }
int main()
{
        int arr[10]={1 ,3 ,5 ,5 ,5, 5 ,67 ,123 ,125};
        int first=firstoccurence(arr,9,5);
        int last=lastoccurence(arr,9,5);
        cout<<first<<" "<<last;
    
}