#include<iostream>
using namespace std;
int main()
{
    
    int arr[100]={12};
    int s=0;
    int e=0;
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(s==e)
        {
            cout<< arr[s]<<" ";
            break;
        }
       else if(arr[mid]<arr[mid-1])
        {
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]>arr[mid-1])
        {
            cout<<arr[mid];
            break;
        }
        else if(arr[0]>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }

    }
}