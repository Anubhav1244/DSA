#include<iostream>
using namespace std;
void check_prime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"no"<< endl;
            break;
        }
        
    }
    cout<<"yes"<<endl;
}
int main()
{
    int n;
    cin>>n;
    check_prime(5);
}
