#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int j;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n-i-1;k++)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<j+1<<"  ";
        }
        // cout<<1<<j;
        for(int l=j-1;l>=1;l--)
        {
            cout<<l<<"  ";
        }
        cout<<endl;
    }
}