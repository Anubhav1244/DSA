#include<iostream>
#include<vector>
using namespace std;
void merge(int nums[],int s,int e,int &count)
{
    int mid=(s+e)/2;
    
    int i=0,j=0,k=s;
    int lenleft=mid-s+1;
    int lenright=e-mid;
    int *leftarr= new int[lenleft];
    int *rightarr=new int[lenright];
    
    for(int i=0;i<lenleft;i++)
    {
        leftarr[i]=nums[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<lenright;i++)
    {
        rightarr[i]=nums[k];
        k++;
    }
    int mainIndex=s;
    while(i<lenleft && j<lenright)
    {
        if(leftarr[i]<=rightarr[j])
        {
            nums[mainIndex]=leftarr[i];
            i++;
            
            
        }
        else if(leftarr[i]>rightarr[j])
        {
            nums[mainIndex]=rightarr[j];
            j++;
            count++;
        }
        mainIndex++;
       
        
    }
    while(i<lenleft)
    {
        nums[mainIndex]=leftarr[i];
        i++;
        mainIndex++;
        
    }
    while(j<lenright)
    {
        nums[mainIndex]=rightarr[j];
        j++;
        mainIndex++;
       
    }
    free(leftarr);
    free(rightarr);
}
void mergesort(int nums[],int s,int e,int &count)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    mergesort(nums,s,mid,count);
    mergesort(nums,mid+1,e,count);
    merge(nums,s,e, count);


}
int main()
{
    int ans[100]={10,10,10};
    int count=0;
    mergesort(ans,0,2,count);
    for(int i=0;i<3;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<count;
}