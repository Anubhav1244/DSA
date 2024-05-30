#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarysearch(vector<int>v ,int s,int h ,int key)
{
    int mid=s+(h-s)/2;
    
    while(s<=h)
    {
        if(v[mid]==key)
        {
            return mid;
        }
        else if(v[mid]<key)
        {
            s=mid+1;
        }
        else
        {
            h=mid-1;
        }
        mid=s+(h-s)/2;
    }

}
int main()
{
    vector<int> v={3,4,11,13,15,17,21,56,70};
    int key=21;
    if(v[0]==key) return 0;
    int n=v.size()-1;
    int i=1;
    while(i<v.size() && v[i]<=key)
    {
        i=i*2;
    }
   

    int h=min(i,n);
   
    int pos=binarysearch(v,i/2,h,key);
    cout<<pos<<" ";
}
