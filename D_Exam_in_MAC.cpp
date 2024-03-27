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
    int n, c;cin>>n>>c; 
    vector<int> v(n);
    for(auto &it : v) cin>>it; 
    int ans = ((c+1)*(c+2))/2; 

    int ev = 0, od = 0; 
    rep(i,0,n){
        ans-=(v[i]/2+1);
        ans-=(c-v[i]+1);
        if(v[i]&1) od++;
        else ev++;
    }

    ans = ans + (ev*(ev+1))/2;
    ans = ans + (od*(od+1))/2;

    cout<<ans<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}