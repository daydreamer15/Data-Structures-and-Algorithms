//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int f(int wt[], int val[], int ind, int W, vector<vector
<int>>& dp){
        if(ind == 0){
        return ((int)(W/wt[0])) * val[0];
    }
        
        if(dp[ind][W]!=-1)
        return dp[ind][W];
        
    int notTaken = 0 + f(wt,val,ind-1,W,dp);
    
    int taken = INT_MIN;
    if(wt[ind] <= W)
        taken = val[ind] + f(wt,val,ind,W-wt[ind],dp);
        
    return dp[ind][W] = max(notTaken,taken);
}

    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(N, vector<int>(W+1, -1));
        
        return f(wt, val, N-1, W, dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends