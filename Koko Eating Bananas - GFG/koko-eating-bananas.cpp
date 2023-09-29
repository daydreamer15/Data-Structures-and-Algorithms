//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    int bada(vector<int>& piles){
        sort(piles.begin(), piles.end());
        
        int n = piles.size();
        return piles[n-1];
    }
    
    int totalHrs(vector<int>& piles, int num){
        
        int time = 0;
        int n = piles.size();
        for(int i = 0; i<n; i++){
            time += ceil((double)piles[i]/(double)num);
        }
        
        return time;
    }
    
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        
        int l = 1;
    int h = *max_element(piles.begin(), piles.end()); // Maximum pile size
    int ans = -1; // Initialize ans to an invalid value

    while (l <= h) {
        int mid = (l + h) / 2;

        int time = totalHrs(piles, mid);

        if (time <= H) {
            // We can eat slower, so decrease the upper bound
            ans = mid;
            h = mid - 1;
        } else {
            // We need to eat faster, so increase the lower bound
            l = mid + 1;
        }
    }

    return ans;
}






};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends