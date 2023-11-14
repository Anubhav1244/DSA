#include<iostream>
using namespace std;
void revprint(int arr[],int size,int index)
{
    if(index>=size)
    {
        return;
    }
    
    revprint(arr,size,index+1);
    cout<<arr[index]<<" ";
}

int main()
{
    int arr[10]={1,2,3,4,5};
    revprint(arr,5,0);
}
