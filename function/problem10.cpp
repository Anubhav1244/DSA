#include<iostream>
using namespace std;

void prime_1_to_n(int n)
{
    
    for(int j=2;j<=n;j++)
    {
        if(n==2)
        {
            cout<<2<<" ";
        }
        if(n%j==0)
        {
            
            break;
        }
        
        if(j==n-1)
        {
            cout<<n<<" ";
        }
        
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    prime_1_to_n(i);
    
}