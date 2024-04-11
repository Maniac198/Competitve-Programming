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

void solve(){
    int n,q; cin >> n >> q; 
    int req = 2 * n;
    vector<pair<int,int>> v;
    int acc = 0;
    rep(i,0,q){
        int u,p; cin >> u >> p;
        acc += p;
        v.push_back(make_pair(u,p));
    }

    if( acc < req ){
        cout << -1 << endl;
        return;
    }
    sort(all(v));
    int sum = 0;
    rep(i,0,q){
        sum += v[i].second;
        if( sum >= req){
            cout << v[i].first << endl;
            break;
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