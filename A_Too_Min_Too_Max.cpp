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
    int n; cin>>n;
    vector<int> v(n);
    for(auto &it : v) cin>>it;
    sort(all(v));
    int ans = 0;
    int j = 0, i = n-1, k = n-2, l = 1;
    ans += abs(v[i]-v[j]);
    ans += abs(v[j]-v[k]);
    ans += abs(v[k]-v[l]);
    ans += abs(v[l]-v[i]);
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