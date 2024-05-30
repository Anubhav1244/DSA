#include<iostream>
#include<stack>

using namespace std;
void insertele(stack<int> &st,int ele)
{
    if(st.top()<ele)
    {
        int temp=st.top();
        st.push(ele);
        
        return;
    }
    int temp=st.top();
    st.pop();
    insertele(st,ele);

    st.push(temp);
    
}
int main()
{
    stack<int> st;

    st.push(13);
    st.push(15);
    st.push(17);
    st.push(19);

    insertele(st,18);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}