#include<iostream>
using namespace std;
//hollow diamound
//      *
//     * *
//    *   *
//   *     *
//  *       *
// *         *
// *         *
//  *       *
//   *     *
//    *   *
//     * *
//      *
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i+1;k++)
        {
            if(k==0||k==i)
            {
                cout<<"* ";

            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            if(j==0||j==n-i-1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}