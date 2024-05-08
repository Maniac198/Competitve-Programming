#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ost;
// order_of_key()
// find_by_order()

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
    int n; cin >> n; 
    vector<int> v(n); 
    map<int,int> mp; 
    for(int i = 0; i<n; i++){
        cin >> v[i];
        ost.insert({v[i],i});
        mp[v[i]]++;
    }

    int ans = 0;
    rep(i,0,n){
        mp[v[i]]--;
        int t = ost.order_of_key({v[i],0});
        t += mp[v[i]];
        ost.erase({v[i],i});
        ans += t; 
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