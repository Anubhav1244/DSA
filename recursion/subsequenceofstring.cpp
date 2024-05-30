#include<iostream>
using namespace std;
void substring(string str,string output,int index)
{
    if(index>=str.length())
    {
        cout<<output<<endl;
        return;
    }
   
    substring(str,output+str[index],index+1);
    
    substring(str,output,index+1);
    
}
int main()
{
    string str="ABC";
    string output="";
    substring(str,output,0);
}