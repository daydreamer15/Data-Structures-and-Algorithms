//Representation of the graphs using adjacency matrix way
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
int main()
{
    int n, m;
    cin>>n>>m;
    //graph here
    int adj[n+1][m+1];
    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
      return 0;
}