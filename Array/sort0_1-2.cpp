#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,0,0,2,1,2,2,1};
    int index=0;
    int left=0;
    int rigth=7;

    while(index <= rigth)
    {
        if(arr[index]==0)
        {
            swap(arr[index],arr[left]);
            index++;
            left++;
        }
        else if(arr[index]==2)
        {
            swap(arr[rigth],arr[index]);
            rigth--;
            
        }
        else
        {
            index++;
        }
    }
for(int i=0;i<8;i++)
{
    cout<<arr[i]<<" ";
}
       
}