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
    ll n; cin >> n; 
    vector<ll> v(n); 
    set<ll> st;
    rep(i,0,n){
        cin >> v[i]; 
        st.insert(v[i]);
    }
    vector<ll> ans;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 32; j++){
            ll l = v[i] - (1<<j);
            ll r = v[i] + (1<<j);
            vector<ll> tp = {v[i]}; 
            if( st.find(l) != st.end() ) tp.push_back(l);
            if( st.find(r) != st.end() ) tp.push_back(r);

            if( tp.size() > ans.size() ) ans = tp;
        }
    }

    cout << ans.size() << endl;
    for(auto it : ans) cout << it << " ";
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}