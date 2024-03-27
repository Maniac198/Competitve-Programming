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
    vector<int> a(n), t(n),b;
    for(auto &it : a) cin >> it;
    for(auto &it : t) cin >> it; 

    for (int i = 0; i < n; ++i)
    {
        b.push_back(t[i] + a[i]);
        b.push_back(a[i] - t[i]);
    }
    sort(all(b));
    int ans = (b[0] + b[b.size()-1]);
    cout << ans/2;
    if(ans%2==1)
    {
        cout << ".5";
    }cout << endl;

}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}