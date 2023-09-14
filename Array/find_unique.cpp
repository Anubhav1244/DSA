#include<iostream>
using namespace std;
void slove(int arr[])
{
    int ans=0;
    for(int i=0;i<15;i++)
    {
        ans=ans^arr[i];
        
    }
    cout<<ans<<" ";
}
int main()
{
    int arr[20]={1,3,2,2,1,3,4,5,6,4,5,7,6,8,7};
    slove(arr);
}