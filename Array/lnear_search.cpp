#include<iostream>
using namespace std;

int main()
{
    int n,key,arr[100],flag=0;
    cout<<"entr the sizeo an array"<<endl;
    cin>>n;
    cout<<"enter the key";
    cin>>key;
    cout<<"entre the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
           
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"found at "<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
}