//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int l = 0;
        int h = n-1;
        int fo=-1, lo=-1;
        
        while(l<=h){
            int mid = (l+h)/2;
            
            if(arr[mid]==x){
                fo = mid;
                h = mid-1;
            }
            
            else if(arr[mid]<x) l = mid+1;
            
            else h = mid-1;
        }
        
        
         l = 0;
         h = n-1;
        while(l<=h){
            int mid = (l+h)/2;
            
            if(arr[mid]==x){
                lo = mid;
                l = mid+1;
            }
            
            else if(arr[mid]<x) l = mid+1;
            
            else h = mid-1;
        }
        vector<int>ans = {fo, lo};
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends