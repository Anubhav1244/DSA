#include<iostream>
using namespace std;
class stack
{

public:
    int *arr;
    int top1;
    int top2;
    int size;

    stack(int size)
    {
        arr=new int[size];
        this->top1=-1;
        this->top2=size;
        this->size=size;
    }

    void push1(int ele)
    {
        top1++;
        if(top1==top2)
        {
            cout<<"overflow condition";
            return;
        }
        arr[top1]=ele;
    }
    void push2(int ele)
    {
        top2--;
        if(top1==top2)
        {
             cout<<"overflow condition";
            return;
        }
        arr[top2]=ele;
    }
    void pop1()
    {
        if(top1==-1)
        {
            cout<<"underflow condition";
            return;
        }
        arr[top1]=0;
        top1--;

    }
    void pop2(int ele)
    {
        if(top2==-1)
        {
            cout<<"underflow condition";
            return;
        }
        top2--;

    }
    void print()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    
};
int main()
{
    stack st(8);
    st.push1(12);
    st.push1(13);
    st.push1(14);
    st.push2(15);
    st.push2(19);

    st.pop1();
    st.print();
}
