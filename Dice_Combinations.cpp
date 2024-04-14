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

int f(int n, vector<int> &dp){
    if( n < 0 ) return 0;
    if( n == 0 ) return 1; 
    if( dp[n] != -1 ) return dp[n];

    int ans = 0;
    rep(i,1,7){
        ans += ( f(n-i,dp) % MOD );
    }

    return dp[n] = ans % MOD;
}

void solve(){
    int n; cin >> n;    
    vector<int> dp(n+1,0);

    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if( j <= i ){
                dp[i] = (dp[i] + dp[i-j]) % MOD;
            }
        }
    }

    cout << dp[n] << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}