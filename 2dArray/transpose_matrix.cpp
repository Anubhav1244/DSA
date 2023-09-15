#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //METHOD ->1
    
    // int arr1[3][3];

    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         arr1[j][i]=arr[i][j];
    //     }
    // }
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

     //METHOD ->2 space complexity is O(1) trave into the same array no extra array;
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}