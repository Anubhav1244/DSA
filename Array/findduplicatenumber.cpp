#include<iostream>
using namespace std;

int main()
{
    int arr[100]={2,3,4,2,1,5,6,7,8};
    int ans=0;
    for(int i=0;i<9;i++)
    {
        ans=ans^arr[i];
        cout<<ans<<endl;
        if(ans==0)
        {
            cout<<1<<" ";
            cout<< arr[i];
            break;
        }
    }
    
}

