#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n,m; cin>>n>>m;
    vector<int> adj[n];
    while(m--){
        int u,v; cin>>u>>v;
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int leaf = 0;
    rep(i,0,n){
        if(adj[i].size() == 1){
            leaf = i; break;
        }
    }

    int node = adj[leaf][0];
    int center = 0;
    for(auto it : adj[node]){
        if(adj[it].size() > 1){
            center = it; break;
        }
    }

    cout<<adj[center].size() << " " << adj[node].size() - 1 <<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}