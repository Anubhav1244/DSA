#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int>st;
    st.push(-1);
    int arr[5]={8,4,6,2,3};
    int ans[5];
    for(int i=0;i<5;i++)
    {
        while(st.top()>=arr[i])
        {
            st.pop();
        }
        ans[i]=st.top();
        st.push(arr[i]);
    }

    for(auto it : ans)
    {
        cout<<it<<" ";
    }
}