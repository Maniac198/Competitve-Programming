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
    ll n; cin >> n; 
    vector<ll> v(n+1,0); 
    rep(i,1,n+1) cin >> v[i];

    ll i = 0, j = n+1;
    ll l = 0, r = 0;
    ll ind = 0;

    while( i < j ){
        if( l < r ){
            l += v[++i];
        }
        else if( l > r ){
            r += v[--j];
        }
        else{
            ind = i;
            l += v[++i];
            r += v[--j];
        }
    }

    cout << accumulate(v.begin(),v.begin()+ind+1,0ll) << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}