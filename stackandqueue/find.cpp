#include<iostream>
using namespace std;

int main()
{
    int arr[10]={-1,-2,-3,2,-1,4};
    int sum=0;
    int maxi=INT32_MIN;
    for(int i=0;i<6;i++)
    {
        sum=sum+arr[i];
        maxi=max(maxi,sum);
        if(sum<0)
        {
            sum=0;
        }
        
    }
    cout<<maxi;

    
}