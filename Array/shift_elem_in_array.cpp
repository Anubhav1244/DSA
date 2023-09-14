#include<iostream>
using namespace std;
void shift_elem_in_array(int arr[],int n,int res[],int k)
{
    for(int i=0;i<n;i++)
    {
        int j=(i+k)%n;
        res[j]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
}
int main()
{
    int arr[10]={1,5,3,2,4,7};
    int res[10];
    shift_elem_in_array(arr,6,res,3);
}