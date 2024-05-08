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
    int n; cin >> n;
    vector<string> mat(n);
    rep(i,0,n){
        cin >> mat[i];
    }  
    
    vector<vector<int>> dp(n,vector<int>(n));

    if( mat[n-1][n-1] == '*') dp[n-1][n-1] = 0;
    else dp[n-1][n-1] = 1;

    for(int i = n-1; i >= 0; i--){
        for(int j = n-1; j >= 0; j--){
            if(i == n-1 and j == n-1) continue;
            if(mat[i][j] == '*') dp[i][j] = 0;
            else{
                int ans1 = i < n-1 ? dp[i+1][j] : 0;
                int ans2 = j < n-1 ? dp[i][j+1] : 0;
                dp[i][j] = (ans1 + ans2) % MOD;
            }
        }
    }
    
    cout << dp[0][0] << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}