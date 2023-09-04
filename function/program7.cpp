#include<iostream>
using namespace std;

int sum_even_n(int num)
{
    int sum=0;
    for(int i=2;i<num;i=i+2)
    {
        sum=sum+i;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum_even_n(n);
}