#include<iostream>

using namespace std;

int sum_1_to_n(int n)
{
    int sum=(n*(n+1))/2;
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum_1_to_n(n);
}