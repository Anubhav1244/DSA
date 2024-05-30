#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> arr ={{1,2,3},{4,5,6},{7,8,9}};

    //transpose the matrix
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    
    //90 degree rotation;
    for(int i=0;i<3;i++)
    {
        reverse(arr[i].begin(),arr[i].end());
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