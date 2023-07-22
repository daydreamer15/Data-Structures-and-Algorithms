//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	int findMaxSubarraySum(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    int i = 0;
	    int j = 0;
	    int mysum = 0;
	    int maxisum = 0;
	    
	    
	    while(j<n){
	        mysum+=arr[j];
	        
	        while(mysum>sum){
	            mysum-=arr[i];
	            i++;
	        }
	        
	        maxisum = max(maxisum, mysum);
	        j++;
	    }
	    
	    return maxisum;
	}  

		 

};
	  



//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	 int n;
        cin>>n;
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        long long sum;
        cin >> sum;
        

        Solution ob;
		cout << ob.findMaxSubarraySum(a, n, sum);
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends