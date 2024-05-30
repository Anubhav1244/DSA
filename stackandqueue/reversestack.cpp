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
void reversestack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int temp=st.top();
    st.pop();
    reversestack(st);

    insretBottom(st,temp);

}

int main()
{
    stack<int>st;
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);

    reversestack(st);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}