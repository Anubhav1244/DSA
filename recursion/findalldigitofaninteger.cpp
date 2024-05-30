#include<iostream>
#include<vector>
using namespace std;
void alldigit(int num,vector<int> &ans)
{
    if(num==0)
    {
        return;
    }
    int digit =num%10;
    num=num/10;
    alldigit(num,ans);
    ans.push_back(digit);

}
int main()
{
    vector<int>ans;
    alldigit(4251,ans);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}