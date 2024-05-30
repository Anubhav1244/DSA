#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> st;
    st.push(INT32_MAX);
    int ans[5];
    int arr[5]={2,1,4,6,5};
    for(int i=4;i>=0;i--)
    {
        while(st.top()<=arr[i])
        {
            st.pop();
        }
        if(st.top()==INT32_MAX)
        {
            ans[i]=-1;
        }
        else
        {
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        cout<<ans[i]<<" ";
    }
}