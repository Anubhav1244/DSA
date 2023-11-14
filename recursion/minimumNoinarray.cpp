#include<iostream>
using namespace std;
int maximum(int arr[],int size,int index,int max)
{
    if(index>=size)
    {
        return max;
    }
    if(max<arr[index])
    {
        max=arr[index];
    }
    return maximum(arr,5,index+1,max);
}
int minimum(int arr[],int size,int index,int min)
{
    if(index>=size)
    {
        return min;
    }
    if(min>arr[index])
    {
        min=arr[index];
    }
    return minimum(arr,5,index+1,min);

}
int main()
{
    int arr[250]={4,6,5,6,1};
    cout<<minimum(arr,5,0,arr[0])<<endl;
    cout<<maximum(arr,5,0,arr[0]);
}