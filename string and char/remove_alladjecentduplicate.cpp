#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string ch;
    cin>>ch;
    int n =ch.length();
    
    string ans="";
    int j=0;
    for(int i=0;i<ch.length();i++)
    {

        if(ans.length()>0 && ans[ans.length()-1]==ch[i])
        {
            ans.pop_back();
            j--;
        }
        else 
        {
            ans.push_back(ch[i]);
            j++;
        }
    }
    cout<<ans;

}