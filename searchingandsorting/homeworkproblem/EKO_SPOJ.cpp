/*Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for
 him since he has a nifty new woodcutting machine that can take down forests like wildfire. 
 However, Mirko is only allowed to cut a single row of trees.
Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres),
 and the machine raises a giant sawblade to that height and cuts off all tree parts higher than
 H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. 
 For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, 
 and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, 
 respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).
Mirko is ecologically minded, so he doesnt want to cut off more wood than necessary. Thats why he wants to set his sawblade as
 high as possible. Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.*/

#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;
bool possible(int arr[],int mid,int k)
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]-mid>=0)
        {
            sum=sum+(arr[i]-mid);
        }
        
    }
    if(sum>=k)
    {
        return true;
    }
    return false;
    
}
int main()
{
    int arr[10]={4,42,40,26,46};
    int s=0;
    int e=*max_element(arr,arr+5);
    int k=20;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(possible(arr,mid, k))
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans<<" ";
}

