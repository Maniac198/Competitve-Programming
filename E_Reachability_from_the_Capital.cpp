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

void dfs(int i,vector<bool> &vis,vector<int> adj[]){
    if(!vis[i]){
        vis[i] = true;
        for(auto it : adj[i]){
            dfs(it,vis,adj);
        }
    }
}

void solve(){
    int n,m,s; cin >> n >> m >> s;
    s--; 
    vector<int> adj[n];
    vector<bool> vis(n);

    rep(i,0,m){
        int u,v; cin >> u >> v; 
        u--; v--;
        adj[u].push_back(v);
    }

    dfs(s,vis,adj);

    stack<int> st; 
    rep(i,0,n){
        if( !vis[i] ){
            st.push(i);
            dfs(i,vis,adj);
        }
    }

    fill(all(vis),false);
    int ans = 0;
    while( !st.empty() ){
        int t = st.top(); 
        st.pop();
        if( !vis[t] ){
            dfs(t,vis,adj);
            ans++;
        }
    }

    cout << ans;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}