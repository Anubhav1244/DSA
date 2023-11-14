#include<iostream>
using namespace std;
bool search(int arr[],int size,int key,int index)
{
    if(arr[index]==key)
    {
        return true;
    }
    if(index>=size)
    {
        return false;
    }
    
    return search(arr,size,key,index+1);

}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8};
    int key=9;
    int index=0;
    if(search(arr,8,key,index))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}