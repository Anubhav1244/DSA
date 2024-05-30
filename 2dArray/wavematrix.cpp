#include<iostream>
using namespace std;

int main()
{
    int arr[][4]={{1,2,3,4},{4,5,6,7},{8,9,10,11}};
    int j=0;
    while(j<4)
    {
        if(j%2==0)
        {
            int i=0;
            while(i<3)
            {
                cout<<arr[i][j]<<" ";
                i++;
            }
        }
        
        else if(j%2==1)
        {
           int k=2;
            while(k>-1)
            {
                cout<<arr[k][j]<<" ";
                k--;
            }
        }
        cout<<endl;
        j++;
    }
}