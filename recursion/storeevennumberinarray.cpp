#include<iostream>
#include<vector>
using namespace std;
void storeeven(int arr[],vector<int> &ans,int size,int index)
{
    if(index>=size)
    {
        return;
    }
    if(arr[index] % 2==0)
    {
        ans.push_back(arr[index]);
    }
    return storeeven(arr,ans,size,index+1);
}
int main()
{
    vector<int>arr1;
    int arr[10]={1,2,4,3,6,8};
    storeeven(arr,arr1,6,0);
    
    for(auto it:arr1)
    {
        cout<<it<<" ";
    }
}