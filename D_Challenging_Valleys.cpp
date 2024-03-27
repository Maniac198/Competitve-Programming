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
    int n; cin>>n; 
    vector<int> v(n);
    for(auto &it : v) cin>>it; 
    v.resize(unique(all(v))-v.begin());


    int ans = 0; 
    if(v.size() == 1){
        yes; return;
    }
    if(v[v.size()-2] > v[v.size()-1]) ans++;
    if(v[0] < v[1]) ans++;

    rep(i,1,v.size()-1){
        if(v[i-1] > v[i] and v[i] < v[i+1]) ans++;
    }

    if(ans > 1){
        no; 
    }
    else{
        yes; 
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