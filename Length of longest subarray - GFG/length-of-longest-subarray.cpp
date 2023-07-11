//{ Driver Code Starts
#include <iostream>
using namespace std;

long long int longestSubarry(long long int *arr, long long int n);

// Driver code
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << longestSubarry(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


long long int longestSubarry(long long int A[], long long int n) {
    int i = 0;
    int j = 0;
    int maxi = 0;
    
    while(i<n && j<n){
        if(A[j]>=0){
            j++;
            maxi = max(maxi, j-i);
        }
        
        else{
            i = j+1;
            j++;
        }
    }
    return maxi;
}