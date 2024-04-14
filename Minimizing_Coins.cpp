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
    int n, sum; cin >> n >> sum;
    vector<int> dp(sum+1,1e9), coins(n);
    rep(i,0,n) cin >> coins[i];

    dp[0] = 0;
    for(int i = 1; i <= sum; i++){
        for(int j = 0; j < n; j++){
            if( coins[j] <= i ){
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    if(dp[sum] == 1e9){
        cout << -1 << endl;
    }
    else{
        cout << dp[sum] << endl;
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}