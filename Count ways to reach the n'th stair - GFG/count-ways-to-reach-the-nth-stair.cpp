//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    long long int mod = 1e9+7;
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        vector<int>dp(n+1, -1);
        // if(n==0)return 1;
        // if(n==1)return 1;
        int prev2= 1;
        int prev= 1;
            
        for(int i = 2; i<=n; i++){
        int curr_i = (prev%mod + prev2%mod)%mod;
         prev2 = prev;
         prev = curr_i;
        }
        return prev%mod;
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