#include<iostream>

using namespace std;

long long int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int res=1;
    for(int i=1;i<=n;i++)
    {
        res=res*i;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}