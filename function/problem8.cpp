#include<iostream>
using namespace std;

float area_of_circle(int radius)
{
    return 3.14*radius*radius;
}
int main()
{
    int radius;
    cin>>radius;
    cout<<area_of_circle(radius)<<endl;
}