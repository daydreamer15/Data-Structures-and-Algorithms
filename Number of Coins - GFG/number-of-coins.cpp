//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
	int f(int coins[], int ind, int M, int V, vector<vector<int>>&dp){
	    
	   // int mini = INT_MAX;
	   //if(ind<0) return 0;
	   //if(V==0) return 0;
	   if(ind==0){
	       if(V%coins[ind]==0) return V/coins[0];
	       else return 1e9;
	   }
	    if(dp[ind][V]!=-1) return dp[ind][V];
	    
	        int take=INT_MAX;
	        if(V>=coins[ind]) take =1+ f(coins, ind, M, V-coins[ind],dp);
	        
	        int nottake = f(coins, ind-1, M, V,dp);
	        
	       // mini = min(take, nottake)
	        return dp[ind][V]=min(take,nottake);
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    sort(coins, coins+M);
	    vector<vector<int>>dp(M, vector<int>(V+1,-1));
	    int ans = f(coins,M-1, M, V, dp);
	    
	    if(ans>=1e9) return -1;
	    return ans;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends