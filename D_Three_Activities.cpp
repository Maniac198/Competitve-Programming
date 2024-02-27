#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n = nxt();
    vector<pair<int,int>> a(n),b(n),c(n);
    
    rep(i,0,n) a[i] = make_pair(nxt(),i);
    rep(i,0,n) b[i] = make_pair(nxt(),i);
    rep(i,0,n) c[i] = make_pair(nxt(),i);

    sort(all(a),greater<>());
    sort(all(b),greater<>());
    sort(all(c),greater<>());

    int ans = 0; 
    rep(i,0,3){
        rep(j,0,3){
            rep(k,0,3){
                if(a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second){
                    ans = max(ans,a[i].first+b[j].first+c[k].first);
                }
            }
        }
    }

    cout<<ans<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}