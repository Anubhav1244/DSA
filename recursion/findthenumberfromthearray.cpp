#include<iostream>
#include<vector>
using namespace std;
int number(vector<int>&num,int index,int &digit)
{
    if(index>=num.size())
    {
        return digit;
    }
    digit=digit*10+num[index];
    number(num,index+1,digit);
    return digit;

}
int main()
{
    vector<int>ans={4,3,1,5};
    int digit=0;
    int ans1=number(ans,0,digit);
    cout<<ans1<<" ";
}

