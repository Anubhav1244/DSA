#include<iostream>
using namespace std;
int set_kth_bit(int n,int k)
{
    int x=n;
    int value=1<<k;
    int res=n|value;
    cout<<res;
}
int main()
{
    cout<<"enter the element"<<endl;
    int n;
    cin>>n;
    cout<<"enter the kth pos"<<endl;
    int k;
    cin>>k;
    set_kth_bit(n,k);

}