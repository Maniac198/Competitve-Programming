#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;
tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> st;

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> p(n);
    for (auto &[a, b]: p){
        cin >> a >> b;
        st.insert(b);
    }
 
    sort(p.begin(), p.end());
 
    int ans = 0;
    for (auto [a, b]: p) {
        st.erase(b);
        int v = st.order_of_key(b);
        ans += v;
    }
 
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