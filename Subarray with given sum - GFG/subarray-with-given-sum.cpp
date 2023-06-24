//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
         if(s == 0){ // handle sum = 0
            for(int i=0; i<n; i++)
                if(arr[i] == 0)
                    return vector<int>{i,i};
            return vector<int>{-1};
        }
        int l = 0, r=0;
        int curr_sum = 0;
        while(l<n && r<=n && l<=r){
            if(curr_sum == s)
                return vector<int>{l+1,r};
            if(curr_sum < s)
                curr_sum += arr[r++];
            else
                curr_sum -= arr[l++];
        }
        return vector<int>{-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends