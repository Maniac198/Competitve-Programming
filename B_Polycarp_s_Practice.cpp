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
    int n,k; cin >> n >> k; 
    vector<pair<int,int>> v;
    rep(i,0,n){
        int tp; cin >> tp; 
        v.push_back({tp,i+1});
    }

    sort(all(v),[&](const pair<int,int> &a, const pair<int,int> &b){
        if( a.first != b.first ) return a.first < b.first;
        else return a.second > b.second;
    });
    reverse(all(v));

    vector<int> ans; 
    ll res = 0;
    rep(i,0,k){
        res += (v[i].first);
        ans.push_back(v[i].second);
    }

    cout << res << endl;
    sort(all(ans));
    int last = 0;
    for(int i = 0; i < k-1; i++){
        cout << ans[i] - last<< " ";
        last = ans[i];
    }
    cout << n - last;
    // for(auto it : v) cout << it.first << " " << it.second << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}