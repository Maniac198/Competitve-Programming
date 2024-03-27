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
    int n,k; cin>>n>>k; 
    vector<int> v(n); 
    for(auto &it : v) cin>>it; 
    vector<int> preMax(n,0);
    preMax[0] = v[0];
    rep(i,1,n){
        preMax[i] = max(preMax[i-1],v[i]);
    }

    vector<int> preSum(n+1,0);
    preSum[1] = v[0];
    rep(i,2,n+1){
        preSum[i] = preSum[i-1] + v[i-1];
    }

    while(k--){
        int query = nxt();
        auto ind = lower_bound(all(preMax),query+1);
        int i = ind-preMax.begin();
        cout<<preSum[i]<<" ";
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