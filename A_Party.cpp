#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vb v.begin()
#define      ve v.end()
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

vector<vector<int>> adj; 
vector<int> depth; 

void dfs(int root, int d = 0){
    depth[root] = d; 
    rep(i,0,adj[root].size()){
        dfs(adj[root][i],d+1);
    }
}
void solve(){
    int n; cin>>n; 
    vector<int> roots;

    rep(i,0,n){
        int v; cin>>v;
        if(v!=-1){
            adj[v-1].push_back(i);
        }
        else{
            roots.push_back(i);
        }
    }

    rep(i,0,roots.size()){
        dfs(roots[i]);
    }

    int maxi = *max_element(depth.begin(),depth.end());
    cout<<maxi+1<<endl; 
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    
}