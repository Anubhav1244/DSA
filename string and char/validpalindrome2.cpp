#include<iostream>
using namespace std;
bool checkpalindrome(string ch,int i,int j)
{
    while(i<j)
    {
        if(ch[i]!=ch[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    string ch;
    cin>>ch;
    int i=0;
    int flag=0;
    int j=ch.length()-1;
    while(i<j)
    {
        if(ch[i]!=ch[j])
        {
            flag=1;
           bool ans=checkpalindrome(ch,i+1,j);
           bool ans1=checkpalindrome(ch,i,j-1); 
           if(ans||ans1)
           {
                cout<<"t:"<<"true";
                
                break;
           }    
           else
           {
             cout<<"f:"<< "false";
             break;
           }
                
        }
        else
        {
            i++;
            j--;
        }
    }
    if(flag==0)
    {
        cout<<"true";
    }
    
    
}