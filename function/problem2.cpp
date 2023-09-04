#include<iostream>
using namespace std;

int max_of_three(int a,int b, int c)
{
    int max1= max(a,b);
    int max2=max(max1,c);
    return max2;
}

int main()
{
    int maxy=max_of_three(7,8,9);
    cout<<maxy<<endl;
}