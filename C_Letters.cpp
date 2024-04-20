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

void solve(){
    ll n, m; cin >> n >> m; 
    vector<ll> v(n), pref(n+1,0);
    rep(i,0,n) cin >> v[i];
    
    pref[1] = v[0];
    rep(i,2,n+1){
        pref[i] = pref[i-1] + v[i-1];
    }

    while ( m -- ){
        ll query; cin >> query;
        ll ind = lower_bound(all(pref),query) - pref.begin();
        ll ans = query - pref[ind-1];
        cout << ind << " " << ans << endl;
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}