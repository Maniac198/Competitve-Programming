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
    int n,k; cin >> n >> k; 
    vector<int> a(n), h(n), prea(n); 
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> h[i];

    prea[0] = a[0];
    rep(i,1,n){
        prea[i] = prea[i-1] + a[i];
    }

    int i = 0, size = 1; 
    ll ans = 0;
    ll l = 0;
    ll c = 0;
 
    for (ll r = 0; r < n; r++){
        if(r > 0){
            if(h[r-1] % h[r] == 0){
                c += a[r];
            }
            else{
                l = r;
                c = a[r];
            }
        }
        else{
            c = a[r];
        }
 
        while(c > k){
            c -= a[l];
            l++;
        }
 
        ans = max(ans, r - l + 1);
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