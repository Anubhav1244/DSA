#include<iostream>
//hollow rectangle
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)

        {
            if(i==0||i==n-1)
            {
                cout<<"* ";
            }
           else if(j==0||j==4)
            {
                cout<<"* ";
            }
            else
            cout<<"  ";
           
        }
        cout<<endl;
    }
}