#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vb v.begin()
#define      ve v.end()
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve(){
    int n,x,y; cin>>n>>x>>y;
    vector<int> v(n);
    for(auto &it : v) cin>>it; 

    sort(v.begin(),v.end());
    map<pair<int,int>,int> mp; 
    int ans = 0; 
    for(int i = 0; i<n; i++){
        int c = v[i] % x;
        c = x - c;
        c %= x;

        int c1 = v[i] % y;
        ans += mp[make_pair(c,c1)];
 
        c = v[i] % x;

        mp[make_pair(c,c1)]++;
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