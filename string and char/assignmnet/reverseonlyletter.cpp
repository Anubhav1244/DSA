#include<iostream>
using namespace std;

int main()
{
    string str1="a-bC-dEf-ghIj";
    int s=0;
    int l=str1.length()-1;
    
    while(s<=l)
    {
        if(!(str1[s]>='a' && str1[s]<='z' || str1[s]>='A' && str1[s]<='Z' ))
        {
            s++;
        }
        if(!(str1[l]>='a' && str1[l]<='z' || str1[l]>='A' && str1[l]<='Z'))
        {
            l--;
        }
        swap(str1[s],str1[l]);
        s++;
        l--;
    }
    cout<<str1;  
       
}