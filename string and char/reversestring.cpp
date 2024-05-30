#include<iostream>
using namespace std;

int main()
{
  char ch[200];
  cin>>ch;
  
  int j=6;
  int i=0;
    while(i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
  cout<<ch;

}