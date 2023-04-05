//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string oddEven(int N){
        // code here
        string odd = "odd";
        string even = "even";
        
        int f = 1;
        f = f<<0;
        
        int res = f & N;
        
        if(res==0) return even;
        
        else{
            return odd;
        }
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.oddEven(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends