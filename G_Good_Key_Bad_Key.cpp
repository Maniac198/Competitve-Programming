#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

int f(int dp[][33],vector<int> &v,int i,int bad_cnt,int n,int k){
    if( i == n ) return 0;
    if( dp[i][bad_cnt] != -1) return dp[i][bad_cnt];

    if( bad_cnt >= 30){
        return 0;
    }
    int c1 = v[i]/(1 << bad_cnt)-k + f(dp,v,i+1,bad_cnt,n,k);
    int c2 = v[i]/(1 << (bad_cnt+1)) + f(dp,v,i+1,bad_cnt+1,n,k);

    return dp[i][bad_cnt] = max(c1,c2);
}   

void solve(){
    int n, k; cin >> n >> k; 
    vector<int> v(n); 
    rep(i,0,n) cin >> v[i];

    int dp[n][33];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<33; j++){
            dp[i][j] = -1;
        }
    }
    int ans = f(dp,v,0,0,n,k);

    cout << ans << endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}