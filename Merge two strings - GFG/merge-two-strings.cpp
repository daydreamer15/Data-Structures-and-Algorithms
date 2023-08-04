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
    int i = 0; 
    int j = 0;
    
    while(i<S1.size() && j<S2.size()){
        S1.insert(i+1, 1, S2[j]);
        i+=2;
        j++;
    }
    
    while(j<S2.size()){
        S1+=S2[j];
        j++;
    }
    
    return S1;
}