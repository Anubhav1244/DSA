#include<iostream>
using namespace std;

int main()
{
    
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int min=arr[0][0];
    int max=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
                
            }
            if(arr[i][j]>max)
            {
                max=arr[i][j];
                
            }
        }
    }
    cout<<"maximum element is:- "<<max<<endl;
    cout<<"minimum element is:- "<<min<<endl;
}