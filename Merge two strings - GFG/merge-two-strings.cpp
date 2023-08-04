//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    // your code here
    int i = 0, j = 0;
    string res = "";
    
    while(i<S1.size() && j<S2.size()){
        res+=S1[i++];
        res+=S2[j++];
    }
    
    while(i<S1.size()){
        res+=S1[i++];
    }
    
    while(j<S2.size()){
        res+=S2[j++];
    }
    
    return res;
}