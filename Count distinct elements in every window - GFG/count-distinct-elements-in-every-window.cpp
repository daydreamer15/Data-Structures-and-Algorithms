//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
public:
    vector<int> countDistinct(int A[], int n, int k) {
        int i = 0;
        int j = 0;
        unordered_map<int, int> mp;
        vector<int> ans;

        while (j < n) {
            mp[A[j]]++;


            while (j - i + 1 > k) {
                mp[A[i]]--;

                if (mp[A[i]] == 0)
                    mp.erase(A[i]);
                i++;
            }
            
            if (j - i + 1 == k)
                ans.push_back(mp.size());
                
            j++;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends