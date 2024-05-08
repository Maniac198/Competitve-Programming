#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      ll long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void dfs(int src, vector<int> adj[],vector<bool> &vis,vector<int> &components){
    vis[src] = true;
    components.push_back(src);

    for(auto it : adj[src]){
        if( !vis[it] ) dfs(it,adj,vis,components);
    }
}   

void solve(){
    int n,m; cin >> n >> m; 
    vector<int> adj[n]; 
    vector<bool> vis(n);
    vector<int> deg(n);

    rep(i,0,m){
        int u = nxt(), v = nxt();
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }

    int ans = 0;
    vector<int> comp;
    rep(i,0,n){
        if( !vis[i] ){
            comp.clear();
            dfs(i,adj,vis,comp);
            bool ok = true;
			for (auto v : comp) ok &= deg[v] == 2;
			if (ok) ++ans;
        }
    }

    cout << ans << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}