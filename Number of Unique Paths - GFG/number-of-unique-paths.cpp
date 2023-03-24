//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //MEMOIZATION WALA SOLUTION HAI!!
    // int rec(int i, int j, vector<vector<int>>&dp){
    //     if(i==0 && j==0) return 1;
        
    //     if(i<0 || j<0) return 0;
        
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int up = rec(i-1, j, dp);
    //     int left = rec(i, j-1, dp);
        
    //     return dp[i][j] = up+left;
    // }
    // //Function to find total number of unique paths.
    // int NumberOfPath(int a, int b)
    // {
    //     //code here
    //     vector<vector<int>>dp(a, vector<int>(b, -1));
    //     return rec(a-1, b-1, dp);
        
    // }
    
    
    // //TABULATION WALA SOLUTION HAI!!
    // int NumberOfPath(int a, int b){
    //     vector<vector<int>>dp(a, vector<int>(b, -1));
        
        
        
    //     for(int i = 0; i<a; i++){
    //         for(int j = 0; j<b; j++){
    //             if(i==0 && j==0){
    //                 dp[0][0] = 1;
    //                 continue;
    //             }
                
    //             int up = 0, left = 0;
                
    //             if(i>0) up = dp[i-1][j];
                
    //             if(j>0) left = dp[i][j-1];
                
    //             dp[i][j] = up + left;
    //         }
    //     }
    //     return dp[a-1][b-1];
    // }
    
    int NumberOfPath(int a, int b){
        vector<int>prev(a,0);
        
        for(int i = 0; i<a; i++){
            vector<int>temp(b, 0);
            
            for(int j = 0; j<b; j++){
                if(i==0 && j==0) 
                {
                    temp[j] = 1;
                    continue;
                }
                
                int up = 0;
                int left = 0;
                
                if(i>0) up = prev[j];
                if(j>0) left = temp[j-1];
                
                temp[j] = up+left;
            }
            prev = temp;
        }
        return prev[b-1];
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends