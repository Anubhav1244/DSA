#include<iostream>
using namespace std;

int main()
{
    int sum_row=0;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum_row=sum_row+arr[i][j];

        }
        cout<<"sum of row"<<i+1<<" "<< sum_row<<endl;
        sum_row=0;
    }
    
}