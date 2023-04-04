//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int nums[], int n)
    {
        //code here.
        
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            int mid = (low+high)>>1;
            if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid]){
                return nums[mid];
            }
            if(mid%2==0){
                if(nums[mid-1]==nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid +1;
                }
            }
            else{
                if(nums[mid-1]==nums[mid]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return -1;    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends