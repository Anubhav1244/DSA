#include<iostream>
using namespace std;

int main()
{
    int arr[100]={-2,-9,-6,-7,-3,2,4,5,-4};
    int l=0;
    int e=8;
    while(l<        e)
    {
        if(arr[e]<0)
        {
            swap(arr[l],arr[e]);
            l++;
        }
        else if(arr[e]>=0)
        {
            e--;
        }
    }
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" "; 
    }
}

