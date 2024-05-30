#include<iostream>
using namespace std;
void substring(int arr[],int s,int e,int size)
{
    if(e>=size)
    {
        return;
    }
    for(int i=s;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    substring(arr,s,e+1,size);
}
int main()
{
    int arr[6]={1,2,3,4,5,6};

    for(int i=0;i<3;i++)
    {
        substring(arr,i,0,6);
    }
}