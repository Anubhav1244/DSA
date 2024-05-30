#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int coinchange(vector<int> &coins,int amount)
{
    if(amount==0)
    {
        return 0;
    }
    if(amount<0)
    {
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++)
    {
        int coin=coins[i];
        if(coin<=amount)
        {
            int recans=coinchange(coins,amount-coin);
            if(recans!=INT_MAX)
            {
                int ans=1+recans;
                mini=min(mini,ans);
            }
        }
            
     }
    if(mini==INT_MAX)
    {
        return -1;
    }
    return mini;
}
int main()
{
    vector<int>coins={1,2,5};
    cout<<coinchange(coins,11);
}