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
    int n, k; cin >> n >> k; 
    vector<int> v(32,0);

    rep(i,0,n){
        int p; cin >> p; 
        rep(i,31,0){
            if( (p&(1<<i)) ){
                v[i]++;
            }
        }
    }

    vector<int> ans;
    rep(i,31,0){
        if( k >= (n-v[i]) ){
            ans.push_back(i);
            k -= (n-v[i]);
        }
    }

    ll res = 0;
    for(auto it : ans){
        res |= (1<<it);
    }
    cout << res << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}