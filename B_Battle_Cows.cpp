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
    int n , k; cin >> n >> k; k--;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    vector<ll> v = a;
 
    swap(v[0],v[k]);
    ll ans = 0;
    for (ll i = 1; i < n; i++){
        if(v[i] > v[0]){
            break;
        }
        ans++;
    }

    ll ind = 0;
    for(int i = 0; i<n; i++){
        if( a[i] >= a[k] ){
            ind = i;
            break;
        }
    }

    v = a;
    swap(v[ind],v[k]);

    ll ans2 = 0;
    if( ind > 0) ans2++;

    for(int i = ind+1; i<n; i++){
        if(v[i] > v[ind]) break;

        ans2++;
    }

    cout << max( ans , ans2 ) << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}