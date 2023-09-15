#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int diagonal_sum1=0;
    int diagonal_sum2=0;
    int n=2;
    for(int i=0;i<3;i++)
    {
        diagonal_sum1=diagonal_sum1+arr[i][i];
       diagonal_sum2=diagonal_sum2+arr[i][n--];
    }
    cout<<"daigonal sum 1:- "<<diagonal_sum1<<endl;
    cout<<"daigonal sum 2:- "<<diagonal_sum2<<endl;
}