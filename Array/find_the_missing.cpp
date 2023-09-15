#include<iostream>
using namespace std;

// int main()
// {
//     int arr[100]={1,3,3,4,5};
//     for(int i=0;i<5;i++)
//     {
//         int index=abs(arr[i]);
//         if(arr[index-1]>0)
//             arr[index-1]*=-1;
//     }
//     for(int i=0;i<5;i++)
//     {
//         if(arr[i]>0)
//         {
//             cout<<i+1<<" ";
//         }
//     }
// }

int main()
{
    int arr[100]={1,3,4,3,5};
    int i=1,j=1;
    while(j<=5)
    {
        if(arr[i-1]==j)
        {
            j++;
        }
        swap(arr[i],arr[arr[i]]);
        j++;

    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}