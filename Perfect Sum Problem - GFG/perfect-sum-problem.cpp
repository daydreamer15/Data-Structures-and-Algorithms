//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	 int mod = 1e9+7;
// 	int findWaysUtil(int ind, int target, int arr[], vector<vector<int>> &dp){
//     if(ind==0){
//     if(target==0 && arr[ind]==0) return 2;
    
//     if(target == 0 || target == arr[0]) return 1;
//     return 0;
//     }
    
//     if(dp[ind][target]!=-1)
//         return dp[ind][target];
        
//     int notTaken = findWaysUtil(ind-1,target,arr,dp);
    
//     int taken = 0;
//     if(arr[ind]<=target)
//         taken = findWaysUtil(ind-1,target-arr[ind],arr,dp);
        
//     return dp[ind][target]= (notTaken + taken)%mod;
// }
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>> dp(n,vector<int>(sum+1,0));
        
        // if(arr[0]==0) dp[0][0] = 2;
        // else dp[0][0] = 1;
        
        // if(arr[0]!=0 && arr[0]<=sum) dp[0][arr[0]] = 1;
        for(int i = 0; i < n; i++) dp[i][0] = 1;
        
        if(arr[0] <= sum) dp[0][arr[0]] = 1;
        
        if(arr[0] == 0) dp[0][arr[0]] = 2;
            
        for(int ind = 1; ind<n; ind++){
            for(int target = 0; target<=sum; target++){
                
                int notTake = dp[ind-1][target];
                
                int take = 0;
                if(arr[ind]<=target) take = dp[ind-1][target-arr[ind]];
                
              dp[ind][target] = (notTake + take)%mod;
            }
        }
        return dp[n-1][sum];
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends