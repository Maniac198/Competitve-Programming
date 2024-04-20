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
    ll n, w; cin >> n >> w; 
    ll sum = 0, mn = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        int tp; cin >> tp;
        sum -= tp;
        mn = min(mn, sum);
        mx = max(mx, sum);
    }
    if (-w > mn || mx > w)
        cout << 0;
    else
        cout << max(0ll, (w - mx + 1) -abs(mn));
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}