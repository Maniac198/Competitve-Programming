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
    int n,k; cin>>n>>k; 
    vector<int> a(n),b(n);
    for(auto &it : a) cin>>it; 
    for(auto &it : b) cin>>it; 

    int ans = 0, maxi = 0, res = 0;
    for(int i = 0; i<min(n,k); i++){
        ans += a[i];
        maxi = max(maxi,b[i]);
        res = max(res,ans+maxi*(k-i-1));
    }

    cout<<res<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}