//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    long long countstudents(int A[], int N, int M, int mid){
        long long count = 1;
        long long studentpages = 0;
        
        for(int i = 0; i < N; i++){
            if(studentpages + A[i] <= mid) {
                studentpages += A[i];
            }
            else {
                count++;
                studentpages = A[i];
            }
        }
        return count;
    }

      
    
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M > N) return -1;
        
        // Initialize l and h correctly.
        int l = *max_element(A, A+N);
        long long sum = 0;
        for(int i = 0; i < N; i++) {
            sum += A[i];
        }
        int h = sum;
        
        while(l <= h){
            long long  mid = (l + h) / 2;
            
            long long students = countstudents(A, N, M, mid);
            
            if(students > M) {
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }
        return l;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends