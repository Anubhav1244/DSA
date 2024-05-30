#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,-4,-7,3,2};
    int j=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}