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
    ll a[n]; 
    rep(i,0,n) cin >> a[i];

    int f = a[0], l = a[n-1];
    ll fc = 0, lc = 0, ec = 0;

    rep(i,0,n){
        if( a[i] == f ) fc++;
        if( fc >= k and a[i] == l ) lc++;
        if( f == l and a[i] == f ) ec++;
    }

    if( fc >= k and lc >= k ){
        yes; return;
    }
    else if( ec >= k ){
        yes; return;
    }

    no;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}