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
    int n, x; cin >> n >> x; 
    vector<ll> v(n);
    rep(i,0,n) cin >> v[i];

    sort(all(v));

    ll l = 1, r = 2*(1e9);
    int ans = -1;
    while( l <= r ){
        ll mid = (l+r)/2;

        ll cnt = 0;
        for(int i = 0; i < n; i++){
            if( v[i] <= mid ) cnt += (mid-v[i]);
            else break;
        }

        if( cnt <= x ){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
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