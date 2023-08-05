//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long countSubArrayProductLessThanK(const vector<int>& nums, int n, long long k) {
        
        long long product= 1;
        long long  left = 0;
        long long  count = 0;
        
        for (int right = 0; right < n; ++right) {
        product *= nums[right];
        
        while (left <= right && product >= k) {
            product /= nums[left];
            left++;
        }
        
        count += (right - left + 1);
    }
    
    return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends