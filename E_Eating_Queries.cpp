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
    int n, q; cin >> n >> q; 
    vector<int> v(n),pref(n+1,0); 
    for(auto &it : v) cin >> it;

    sort(all(v),greater<int>());
    pref[1] = v[0];
    for(int i = 2; i <= n; i++){
        pref[i] = pref[i-1] + v[i-1];
    }

    int sum = accumulate(all(v),0);
    while(q--){
        int query; cin >> query;
        if( query > sum ){
            cout << -1 << endl;
        }
        else{
            int ind = lower_bound(all(pref),query) - pref.begin();
            cout << ind << endl;
        }
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}