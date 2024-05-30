#include<iostream>
using namespace std;
bool sorted(int arr[],int size,int index)
{
    
    if(index>=size)
    {
        return true;
    }
    if(arr[index]<arr[index-1])
    {
        return false;
    }
    return sorted(arr,5,index+1);
    
}
int main()
{
    int arr[10]={30,20,30,70,50};
    bool ans=sorted(arr,5,1);
    cout<<ans<<" ";

}