//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    int f(int ind, int prev_index, int a[], int n, vector<vector<int>>&dp){
        
        if(ind==n) return 0;
        
        if(dp[ind][prev_index+1]!=-1) return dp[ind][prev_index+1];
        
        int notTake = 0 + f(ind+1, prev_index, a, n, dp);
        
        int take = 0;
        
        if(prev_index == -1 || a[ind]>a[prev_index]) take = 1 + f(ind+1, ind, a, n, dp);
        
        return dp[ind][prev_index+1] = max(take, notTake);
    }
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<vector<int>>dp(n, vector<int>(n+1, -1));
       
       return f(0, -1, a, n, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends