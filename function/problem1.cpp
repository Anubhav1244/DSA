#include<iostream>
using namespace std;
int sumof3number(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<sumof3number(a,b,c)<<endl;
}
