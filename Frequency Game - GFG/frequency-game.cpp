//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        int minFreq=INT_MAX;
        int max=INT_MIN;
        for(auto it:mp){
            if(it.second==minFreq && it.first>max)
                max=it.first;
            else if(it.second<minFreq){
                minFreq=it.second;
                max=it.first;
            }
        }
        return max;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends