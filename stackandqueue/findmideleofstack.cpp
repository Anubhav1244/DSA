#include<iostream>
#include<stack>
using namespace std;
int slove(stack<int> &st,int &mid)
{
    if(mid==1)
    {
        return st.top();

    }
    mid--;
    int temp=st.top();
    st.pop();
    

    slove(st,mid);

    
    st.push(temp);

}
int getmiddle(stack<int> &st)
{
    if(st.top()==-1)
    {
        cout<<"no element in the stack"<<endl;
        return -1;
    }
    int n=st.size();
    int mid=0;
    if(n&1)
    {
        mid=(n/2) + 1;
    }
    else
    {
        mid=n/2;
    }
    int ans=slove(st,mid);
    return ans;
}

int main()
{
    stack<int>st;
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);
    
    int ans=getmiddle(st);
    cout<<"mid of stack"<<ans;
}