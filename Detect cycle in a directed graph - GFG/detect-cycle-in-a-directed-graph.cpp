//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    bool dfscheck(int node, int vis[], vector<int>adj[], int PathVis[]){
        vis[node] = 1;
        PathVis[node] = 1;
        
        for(auto it: adj[node]){
            if(!vis[it]){
                if(dfscheck(it, vis, adj, PathVis)==true){
                    return true;
                }
            }
            else if(PathVis[it]){
                return true;
            }
        }
        PathVis[node] = 0;
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int vis[V] = {0};
        int PathVis[V] = {0};
        
        for(int i = 0; i<V; i++){
            if(!vis[i]){
                if(dfscheck(i, vis, adj, PathVis)==true){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends