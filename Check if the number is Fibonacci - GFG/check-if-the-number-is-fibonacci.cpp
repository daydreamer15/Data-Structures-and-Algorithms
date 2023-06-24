//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    
    string checkFibonacci(int N){
        // code here 
        if(N==1) return "Yes";
        
        int a = 1;
        int b = 1;
        int fib = 0;
        while(fib<=N){
            fib = a+b;
            a = b;
            b = fib;
            
            if(fib==N) return "Yes";
        }
        return "No";
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
        cout << ob.checkFibonacci(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends