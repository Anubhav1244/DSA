#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    if(n>=5)
    {
        return;
    }
    cout<<arr[n]<<" ";
    print(arr,n+1);
}
int main()

{
    int arr[256]={1,2,3,4,5};
    int n=5;
    print(arr,0);
    


}