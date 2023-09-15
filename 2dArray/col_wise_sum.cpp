#include<iostream>
using namespace std;

int main()
{
    int arr[3][4]={{1,2,3,4},{4,5,6,5},{7,8,9,3}};
    for(int j=0;j<4;j++)
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"sum of col"<<j+1<<" "<< sum<<endl;

    }   
}