#include<iostream>
using namespace std;
void find_all_pair(int arr[],int n)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}
int main()
{
    int arr[]={10,20,30};
    find_all_pair(arr,3);
}

