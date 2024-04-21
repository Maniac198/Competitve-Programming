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
    int n,q; cin >> n >> q; 
    vector<int> power(32,0);
    rep(i,0,n){
        int tp; cin >> tp; 
        int d = __builtin_ctz(tp);
        power[d]++;
    }

    while( q-- ){
        int x; cin >> x; 
        int ans = 0;
		for (int i = 30; i >= 0 && x > 0; --i) {
			int need = min(x >> i, power[i]);
			ans += need;
			x -= (1 << i) * need;
		}
		
		if (x > 0) ans = -1;

        cout << ans << endl;
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