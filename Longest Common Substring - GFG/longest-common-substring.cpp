//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        
        int ans = 0;
         
        for(int ind1 = 1; ind1<=n; ind1++){
            for(int ind2 = 1; ind2<=m; ind2++){
                if(S1[ind1-1]==S2[ind2-1]){
                int val = 1 + dp[ind1-1][ind2-1];
                dp[ind1][ind2] = val;
                ans = max(ans, val);
                }
                 else 
                 dp[ind1][ind2] = 0;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends