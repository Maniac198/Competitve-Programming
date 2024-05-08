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
    vector<string> v(n);
    rep(i,0,n) cin >> v[i];
    // rep(i,0,n) cout << v[i] << endl;
    int ans = 1e9;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int cost = 0;

            for(int k = 0; k < m; k++){
                cost += abs(v[i][k] - v[j][k]);
            }

            ans = min(ans,cost);
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