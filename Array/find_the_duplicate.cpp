#include<iostream>
#include<map>
using namespace std;

int main()
{
   int arr[100]={1,3,3,4,2};
   int i=0;
   while(1)
   {
        if(arr[i]==arr[arr[i]])
        {
            cout<<arr[i]<<" ";
            break;
        }
        swap(arr[i],arr[arr[i]]);
   }

}
