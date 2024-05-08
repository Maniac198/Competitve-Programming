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
    ll n, c, d; cin >> n >> c >> d; 
    vector<ll> v(n);
    rep(i,0,n) cin >> v[i];

    sort(all(v),greater<ll>());

    ll l = 0, r = d+2;
	while (l < r) {
		int m = l + (r - l + 1) / 2;
		long long tot = 0;
		int curr = 0;
		for (int i = 0; i < d; i++) {
			if (i % m < n) {tot += v[i % m];}
		}
		if (tot >= c) {
			l = m;
		}
		else {
			r = m - 1;
		}
	}
	if (l == d + 2) {cout << "Infinity\n"; return;}
	if (l == 0) {cout << "Impossible\n"; return;}
	cout << l - 1 << '\n';
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}