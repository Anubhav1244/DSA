#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    string str="/a/b";
    string s2="/..";
    string s1="/.";
    string s3="/";
    stack<string>st;
    int i=0;
    while(i<str.size())
    {
         int start=i;
        int end=i+1;
        while (end<str.size() && str[end]!='/')
        {
            ++end;
        }
        string substring=str.substr(start,end-start);
        i=end;
        if(st.empty() && substring=="/")
        {
            cout<<"/";
            break;
        }
        else if(!st.empty() && substring.compare(s2)==0)
        {
            st.pop();
        }
        else if(substring.compare(s1)==0 || substring.compare(s3)==0)
        {
            continue;
        }
        else
        {
            st.push(substring);
        }

    }
    reverse(st,str);
    
}