#include<iostream>
#include<algorithm>
using namespace std;
void input(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    input(arr,n);
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        if(left==right)
        {
            cout<<arr[left]<<" ";
            break;
        }
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        left++;
        right--;
    }
}