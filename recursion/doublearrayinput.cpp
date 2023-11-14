#include<iostream>
using namespace std;
void doublearray(int arr[],int size,int index)
{
    if(index>=size)
    {
        return;
    }
    arr[index]=arr[index]*2;
    doublearray(arr,size,index+1);
}
int main()
{
    int arr[5]={4,6,5,6,1};
    doublearray(arr,5,0);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}
