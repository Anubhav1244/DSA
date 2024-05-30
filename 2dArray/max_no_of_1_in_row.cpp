#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[3][3]={{1,0,1},{0,0,0},{1,1,1}};
    
    int max=0;
    int row=0;
    for(int i=0;i<3;i++)
    {
        int count=0;
        for(int j=0;j<3;j++)                  
        {
            if(arr[i][j]==1)
            {
                count++;
            }
            
        }
        if(max<count)
        {
            max=count;
            row=i;
        }

    }
    
    for(int k=row;k<=row;k++)
    {
        for(int l=0;l<3;l++)
        {
            cout<<arr[k][l]<<" ";
        }
    }
    
}