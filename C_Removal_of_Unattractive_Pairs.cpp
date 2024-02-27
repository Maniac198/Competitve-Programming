#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
// #define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n = nxt();
    string s; cin>>s; 
    vector<int> v(26,0);
    for(auto c : s) {
        v[c-'a']++;
    }

    int mx = *max_element(all(v));
    int most = n-mx; 
    int canremove = min(most*2,n/2*2);
    cout<<n-canremove<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}