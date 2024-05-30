#include<iostream>
using namespace std;
void revstring(string &str,int s,int e)
{
    if(s>e)
    {
        return;
    }
    
    swap(str[s],str[e]);
    revstring(str,s+1,e-1);
    
}
int main()
{
    string str="anubhavi";
    revstring(str,0,7);
    cout<<str;
   
}