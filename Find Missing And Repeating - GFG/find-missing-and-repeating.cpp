//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        
        map<int, int>mp;
        
        int rep;
        for(int i = 0; i<n; i++){
            mp[arr[i]]++;
        }
        
        int sum = 0;
        for(auto it:mp){
            if(it.second==2) rep = it.first;
            sum+=it.first;
        }
        
        int missing;
        if(n%2==0){
           missing = (n/2)*(n+1) - sum; 
        }
        
        else{
            missing = (n+1)/2*n - sum;
        }
        
        vector<int>v;
        v.push_back(rep);
        v.push_back(missing);
        
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends