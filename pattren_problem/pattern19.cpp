#include<iostream>
using namespace std;
// * * * * * * * * 1 * * * * * * * * 
// * * * * * * * 2 * 2 * * * * * * * 
// * * * * * * 3 * 3 * 3 * * * * * * 
// * * * * * 4 * 4 * 4 * 4 * * * * * 
// * * * * 5 * 5 * 5 * 5 * 5 * * * * 
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int k=0;k<2*n-i-2;k++)
        {
            cout<<"* ";
        }
        for(int l=0;l<2*i+1;l++)
        {
           if(l%2==1)
           {
            cout<<"* ";
           }
           else
           {
            cout<<i+1<<" ";
           }
        }
        for(int k=0;k<2*n-i-2;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}