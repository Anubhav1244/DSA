#include<iostream>
using namespace std;
void alloccurnce(int arr[],int key,int size,int index)
{
    if(index>=size)
    {
        return;
    }
    if(arr[index]==key)
    {
        cout<<index<<" ";
    }
    alloccurnce(arr,key,5,index+1);
}
int main()
{
    int arr[5]={4,10,10,6,10};
    int key=10;
    alloccurnce(arr,key,5,0);
}