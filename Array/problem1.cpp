#include<iostream>
using namespace std;
//take the input in the arrau and print the double of each element
int main()
{
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]=arr[i]*2;
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}
