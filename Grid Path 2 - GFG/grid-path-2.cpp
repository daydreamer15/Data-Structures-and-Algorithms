//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  long long int mod = 1e9+7;
//   int f(int n, int m, vector<vector<int>> &grid, vector<vector<int>>&dp){
//       if(n>=0 && m>=0 && grid[n][m]==1) return 0;
        
//         if(n==0 && m==0) return 1;
        
//         if(n<0 || m<0) return 0;
        
//         if(dp[n][m]!=-1) return dp[n][m];
        
//         int up = f(n-1, m, grid, dp)%mod;
//         int left = f(n, m-1, grid, dp)%mod;
        
//         return dp[n][m] = (up+left)%mod;
//   }


    int f(int n, int m, vector<vector<int>>& grid, vector<vector<int>>& dp){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                
                if(i>=0 && j>=0 && grid[i][j]==1){
                    dp[i][j]=0;
                    continue;
                }
                
                if(i==0 && j==0){
                    dp[i][j] = 1;
                    continue;
                }
                int up = 0;
                int left = 0;
                
                if(i>0)up = (dp[i-1][j])%mod;
                if(j>0)left = (dp[i][j-1])%mod;
                
                dp[i][j] = (up + left)%mod;
                
            }
        }
        
        return dp[n-1][m-1];
        
    }
    
    int totalWays(int n, int m, vector<vector<int>>& grid) {
        // Code here
        
        vector<vector<int>>dp(n, vector<int>(m, -1));
        
        return f(n, m, grid, dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < m; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.totalWays(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends