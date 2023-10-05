//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
 bool possible(int n, int k, vector<int>&stalls, int mid){
     int count = 1;
     
     int last = stalls[0];
     
     for(int i = 1; i<n; i++){
         if(stalls[i]-last>=mid){ 
         count++;
         last = stalls[i];
         }
    }
     
     return count>=k;
 }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(), stalls.end());
        
        int l = 0;
        int h = stalls[n-1];
        int ans = INT_MAX;
        
        while(l<=h){
            int mid = (l+h)/2;
            
            if(possible(n, k, stalls, mid)){
                l = mid+1;
            }
            
            
            else {
                h = mid-1;
                if(h<ans) ans = h;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends