#include<iostream>
#include<stack>

using namespace std;

void insretBottom(stack<int> &st,int ele)
{
    int n=st.size();
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    int temp=st.top();
   
    st.pop();
    insretBottom(st,ele);

    st.push(temp);
}
int main()
{
    stack<int>st;

    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);

    insretBottom(st,16);

    cout<<st.size()<<" ";

    while(!st.empty())
    {
        int temp=st.top();
        cout<<temp<<" ";
        st.pop();

    }
}