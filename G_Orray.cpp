#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
// #define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n; cin>>n; 
    vector<int> v(n);
    for(auto &it : v) cin>>it; 

    int orr = 0; 
    int sz = min(n,31);
    vector<int> vis(n,false);
    rep(i,0,sz){
        int mx = 0, idx = -1;
        for(int i = 0; i<n; i++){
            if(vis[i]) continue;
            if((orr | v[i]) > mx){
                idx = i;
                mx = (orr | v[i]);
            }
        }

        vis[idx] = true;
        cout<<v[idx]<<" ";
        orr |= v[idx];
    }

    rep(i,0,n){
        if(!vis[i]){
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}