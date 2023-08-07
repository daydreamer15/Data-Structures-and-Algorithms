//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string res = "";
        string curr = "";
        vector<string>ans;
        
        for(int i = 0; i<S.size(); i++){
            if(S[i]!='.') curr+=S[i];
            
            else {
                ans.push_back(curr);
                ans.push_back(".");
                curr = "";
            }
        }
        
        
        if(!curr.empty()){
            ans.push_back(curr);
        }
        
        for(int i = ans.size()-1; i>=0; i--){
            res+=ans[i];
        }
        return res;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends