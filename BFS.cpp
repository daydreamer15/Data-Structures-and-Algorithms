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

vector<int> BFSofGraph(int V, vector<int>adj[]){
    vector<int>vis(V+1,0);
    vis[1] = 1;

    queue<int>q;
    q.push(1);
    vector<int>bfs;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}
int main()
{
    int n, m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i = 0; i<m; i++){
        int v, u;
        cin>>v>>u;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    vector<int>ans = BFSofGraph(n, adj);
    cout<<ans.size()<<endl;
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
      return 0;
}