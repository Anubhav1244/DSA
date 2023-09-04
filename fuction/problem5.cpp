#include<iostream>
using namespace std;

void check_even(int num)
{
    if(num&1)
    {
        cout<<"odd"<<endl;
        return;
    }
    cout<<"even"<<endl;

} 
int main()
{
    int n;
    cin>>n;
    check_even(n);
}