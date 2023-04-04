//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int nums[], int n){
        //complete the function here
        
        if(n==1) return nums[0];
        int low = 0, high = n-1, mid;
        
        
        while(low<=high){
            int mid = (low + high)/2;
            // if(n==2) return min(nums[0], nums[1]);
             if(low+1 == high) return min(nums[low],nums[high]);
            if(nums[mid]>nums[high]) low = mid;
            
            else high = mid;
        }
        return nums[mid];
        
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends