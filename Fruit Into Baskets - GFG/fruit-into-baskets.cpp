//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
        int i = 0;
        int j = 0;
        int fruit_type_cnt = 0;
        int fruit_count = 0;
        
        unordered_map<int, int>mp;
        
        while(j<N){
            mp[fruits[j]]++;
            
            while(mp.size()>2){
                mp[fruits[i]]--;
                
                if(mp[fruits[i]]==0) mp.erase(fruits[i]);
                i++;
            }
            
            fruit_count = max(fruit_count, j-i+1);
            j++;
        }
        
        return fruit_count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends