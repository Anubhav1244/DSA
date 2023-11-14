#include<iostream>
using namespace std;
int add(int n)
{
    if(n==1)
    {
        return 1;
    }
    int ans=n+add(n-1);
    return ans;

}
int main()
{
    cout<<add(5);
}