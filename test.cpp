//{ Driver Code Starts
#include<iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int countWays(int n)
    {
      if(n==0)
      {
          return 1;
          
      }
      if(n==1)
      {
          return 1;
      }
      int a=0;
      int b=1;
      int c=a+b;
      for(int i=3;i<=n;i++)
      {
         
          a=b;
          b=c; 
          c=a+b;

      }
      return b;
    }
    
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends