//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
        bool possible(vector<int>& nums, int K, int mid){
            int cnt = 0;
            int n = nums.size();
            
            for(int i = 0; i<n; i++){
                if(nums[i]%mid==0) cnt+=(nums[i]/mid);
                
                else cnt+=((nums[i]/mid)+1);
            }
            
            return cnt<=K;
        }
        
    int smallestDivisor(vector<int>& nums, int K) {

        // Write your code here.
        int maxi = *max_element(nums.begin(), nums.end());
        
        int l = 1;
        int h = maxi;
        
        while(l<=h){
            int mid = (l+h)/2;
            
            if(possible(nums, K, mid)){
            h = mid-1;
            }
            
            else l = mid+1; 
        }
        return l;
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
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends