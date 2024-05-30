#include<iostream>
#include<map>
using namespace std;

int  main()
{
    string str1="egg";
    string str2="add";
    int arr[256]={0};
    int isbchar[256]={0};
    int flag=0;
    for(int i=0;i<3;i++)
    {
        if(isbchar[str2[i]]==0 && arr[str1[i]]==0)
        {
            arr[str1[i]]=str2[i];
            isbchar[str2[i]]=1;
        }
       
    }
    for(int i=0;i<str1.size();i++)
    {
        if(arr[str1[i]]!=str2[i])
        {
            flag=1;
            break;
        }

    }
    if (flag)cout<<false;
    else cout<<true;
}