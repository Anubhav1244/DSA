#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int key)
{
    if(s>e)
    {
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
     if(arr[mid]<key)
    {
       return  binarysearch(arr,mid+1,e,key);
    }
    else
    {
        return binarysearch(arr,s,mid-1,key);
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6};
    int s=0;
    int e=5;
    int key=4;
    cout<<binarysearch(arr,s,e,key);
}