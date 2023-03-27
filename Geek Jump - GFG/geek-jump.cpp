//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // int f(int ind, vector<int>&height, vector<int>&dp, int n){
    //     if(ind==0) return 0;
        
    //     if(dp[ind]!=-1) return dp[ind];
        
    //     int onejump = f(ind-1, height, dp, n) + abs(height[ind] - height[ind-1]);
    //     int twojump=INT_MAX;
    //     if(ind>1){
    //     twojump = f(ind-2, height, dp, n) + abs(height[ind] - height[ind-2]);
    //     }
    //     return dp[ind] = min(onejump, twojump);
    // }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        
        vector<int>dp(n+1, 0);
        
        dp[0] = 0;
        
        for(int i = 1; i<n; i++){
            int onej = dp[i-1] + abs(height[i] - height[i-1]);
            int twoj = INT_MAX;
            if(i>1)
             twoj = dp[i-2] + abs(height[i] - height[i-2]);
             
             dp[i] = min(onej, twoj);
        }
        return dp[n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends