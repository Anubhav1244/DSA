#include<iostream>
using namespace std;
//here we find a^b;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=ans*a;
        }
        a=a*a;
        b=b>>1;
    }
    cout<<ans;
}