#include<iostream>
using namespace std;
//approach possiblity
// 1) countinity
// 2) two pointer
// 3) sort


// sloved by method 1:-
int main()
{
    int arr[100]={1,1,0,0,1,1,1,0,1};
    int count0=0;
    int count1=0;
    for(int i=0;i<9;i++)
    {
        if(arr[i]==0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    
    for(int i=0;i<count0;i++)
    {
        arr[i]=0;

    }
    for(int j=count0;j<9;j++)
    {
        arr[j]=1;
    }
    for(int i=0;i<count0+count1;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}