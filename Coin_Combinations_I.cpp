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
    int n,m; cin >> n >> m; 
    vector<int> v(n), dp(m+1,0); 
    rep(i,0,n) cin >> v[i];

    dp[0] = 1;
    for(int i = 1; i <= m; i++){
        for(int j = 0; j < n; j++){
            if( v[j] <= i ){
                dp[i] = (dp[i] + dp[i-v[j]])%MOD;
            }
        }
    }

    cout << dp[m] << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}