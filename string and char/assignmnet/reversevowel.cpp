#include<iostream>
using namespace std;
int isVowel(char ch)
{
    
    string str = "aeiouAEIOU";
    return (str.find(ch) != string::npos);
}
int main()
{
    string str="leetcode";
    int s=0;
    int e=str.length()-1;

    while(s<e)
    {
        if(!isVowel(str[s]))
        {
            s++;
        }
        if(!isVowel(str[e]))
        {
            e--;
        }
        if(isVowel(str[s]) && isVowel(str[e]))
        {
            swap(str[s],str[e]);
            s++;
            e--;
        }
        
    }
    cout<<str; 
    
}