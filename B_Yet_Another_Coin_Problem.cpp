#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      long long int
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

vector<int> coins = {15,10,6,3,1};

int helper(int coin){
    vector<int> dp(coin+1,1e8);
    dp[0] = 0;

    for(int i = 1; i <= coin; i++){
        for(int j = 0; j<5; j++){
            if(coins[j] <= i){
                int need = dp[i-coins[j]];
                if(need != INT_MAX && need + 1 < dp[i]){
                    dp[i] = need + 1;
                }
            }
        }
    }

    return dp[coin];
}
void solve(){
    int n; cin>>n;
    int ans = 0;

    for(int i = 0; i<5; i++){
        if( n >= coins[i] ){
            int total = n/coins[i];
            ans = total - 1; 
            n %= coins[i];
            n += coins[i];
            ans += helper(n);
            cout<<ans<<endl;
            return;
        }
    }
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}   