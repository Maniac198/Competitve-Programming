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
    ll n;
    cin >> n;
 
    vector<ll> a (n);
 
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    ll ans = 0;
 
    ll r = 0;
 
    for (ll i = 0; i < n; i++)
    {
        while(r != n && a[r]>=r-i+1){
            r++;
        }
        ans += r-i;
    }
    cout << ans << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}