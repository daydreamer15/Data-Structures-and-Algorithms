//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:

bool ispalindrome(int n){
    int rev = 0;
    int t=n;
    while(n>0){
        int rem = n%10;
        n = n/10;
        rev = rev*10+rem;
    }
    // cout<<rev<<endl;
    // cout<<n<<endl;
    if(rev==t) return true;
    
    return false;
}

    int PalinArray(int a[], int n)
    {
    	// code here
    	
    	for(int i = 0; i<n; i++){
    	    if(ispalindrome(a[i])==false) return 0;
    	}
    	
    	return 1;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends