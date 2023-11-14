#include<iostream>
using namespace std;
int position(int arr[],int key,int size,int index)
{

     if(index>=size)
    {
        return -1;
    }
    if(arr[index]==key)
    {
        return index;
    }
   
    return position(arr,key,5,index+1);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int key=5;
    cout<<position(arr,key,5,0);

}