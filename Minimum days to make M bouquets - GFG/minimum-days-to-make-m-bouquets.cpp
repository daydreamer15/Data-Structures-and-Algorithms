//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool possible(int day, vector<int>bloomDay, int k, int m){
        int n = bloomDay.size();
        
        int cnt = 0;
        int boqnum = 0;
        
        for(int i = 0; i<n; i++){
            if(day>=bloomDay[i]){
                cnt++;
            }
            
            else{
                boqnum+=(cnt/k);
                cnt = 0;
            }
        }
        
        boqnum+=(cnt/k);
        
        if(boqnum>=m)return true;
        
        return false;
    }
    
    int solve(int M, int K, vector<int> &bloomDay){
      // Code here
      int n = bloomDay.size();
      
      if(M*1LL*K<=n){
          int l = *min_element(bloomDay.begin(), bloomDay.end());
          int h = *max_element(bloomDay.begin(), bloomDay.end());
          
          while(l<=h){
              int mid = l + (h-l)/2;
              
              if(possible(mid, bloomDay, K, M)) h = mid-1;
              
              else{
                  l = mid+1;
              }
              
          }
          return l;
      }
      return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends