#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s="(a+(b))";
    stack<char>st;

    for(auto it:s)
    {
        if(it=='('||it=='+'||it=='-'||it=='*'||it=='/')
        {
            st.push(it);
        }
        else if((it==')' && st.top()==')') || 
        (it=='+' && st.top()==')')||(it=='*' && st.top()==')')||
        (it=='/' && st.top()==')'))
        {
            st.push(it);
        }
        else
        {
            st.pop();
        }
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}