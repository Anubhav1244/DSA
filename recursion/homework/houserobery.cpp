#include<iostream>
#include<vector>
using namespace std;
int houserobery(vector<int>nums,int index)
{
    if(index>=nums.size())
    {
        return 0;
    }
    int even=nums[index]+houserobery(nums,index+2);
    int odd=0+houserobery(nums,index+1);

    int finalans=max(even,odd);
    return finalans;

    
}
int main()
{
    vector<int>ans={2,1,1,2};
    cout<<"ans:"<<houserobery(ans,0);
}