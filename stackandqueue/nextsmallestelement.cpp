#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int arr[5]={8,4,6,3,3};

    stack<int>st;
    st.push(-1);

    int ans[5];

    for(int i=4;i>=0;i--)
    {
        cout<<"element"<<arr[i]<<" ";
        if(st.top()<arr[i])
        {
            ans[i]=st.top();
            st.push(arr[i]);
        }
        else if(st.top()>=arr[i])
        {
            while(!(st.top()< arr[i]))
            {
                st.pop();
            }
            ans[i]=st.top();
            st.push(arr[i]);
            cout<<st.top()<<" ";
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<ans[i]<<" ";
    }

}