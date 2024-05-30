#include<stack>
#include<iostream>

using namespace std;
class Stack
{ 
 public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }
    int getsize()
    {
        return top+1;
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
            
        }
        else
        {
            return false;
        }
    }
    int getTop()
    {
        return arr[top];
    }
    void push(int ele)
    {
        if(top == size-1)
        {
            cout<<"Stack overflow";
            return;
        }
        top++;
        arr[top]=ele;
        cout<<"element is push sucessfully"<<endl;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"underflow condition";
            return;
        }
        cout<<"Element " << arr[top] << " get poped" <<endl;
        top--;
    }
    void print()
    {
        for(int i=0;i<getsize();i++)
        {
            cout<<"Stack:" <<arr[i]<<" ";
        }
    }


};
int main()
{
    Stack st(8);
    st.push(13);
    st.push(15);
    st.pop();
    cout << st.getsize();
    
}