#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define triplet pair<ll,pair<ll,ll>>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define precise(x,y) cout<<fixed<<setprecision(y)<<x
using namespace std;

void dfs(int node, vector<int>adj[], int vis[], vector<int>&ls){
    vis[node] = 1;
    ls.push_back(node);

    for(auto it: adj[node]){
        if(!vis[node]){
            vis[node] = 1;
            dfs(it, adj, vis, ls);
        }
    }
}

vector<int>dfsOfGraph(int V, vector<int>adj[]){
    int vis[V] = {0};
    int start = 0;
    vector<int>ls;
    dfs(start, adj, vis, ls);
}
int main()
{
    int n, m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>ans = dfsOfGraph(n, adj);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
      return 0;
}