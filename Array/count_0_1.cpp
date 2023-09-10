#include<iostream>
using namespace std;

int main()
{
    int n,count0=0,arr[100];
    cin>>n;
    cout<<"enter the 0 and 1 in the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]==0)
        {
            count0++;
        }

    }
    cout<<"the No. of 0:-"<<count0<<endl;
    cout<<"the No.of 1:-"<<n-count0<<endl;

}