#include<iostream>
using namespace std;
// A
// A B A
// A B C B A
// A B C D C B A
// A B C D E D C B A
int main()
{
    char n;
    cin>>n;
    char j;
    for(char ch='A';ch<=n;ch++)
    {
        for( j='A';j<ch+1;j++)
        {
            cout<<j<<" ";
        }
       
        for(char k=j-2;k>='A';k--)
        {
            char res=k-1;
            cout<<k<<" ";
            
        }
        
        
        cout<<endl;
        
    }

}