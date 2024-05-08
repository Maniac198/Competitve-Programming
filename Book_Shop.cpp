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
    vector<ll> a(n),b(n);
    rep(i,0,n) cin >> a[i];
    rep(j,0,n) cin >> b[j];

    vector<vector<ll>> dp(n+1,vector<ll>(w+1,0));

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= w; j++){
            ll weight = a[i-1];
            int value = b[i-1];

            int skip = dp[i-1][j];
            int take = ( j >= weight ? dp[i-1][j-weight] + value : 0 );

            dp[i][j] = max(skip,take);
        }
    }

    cout << dp[n-1][w] << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}