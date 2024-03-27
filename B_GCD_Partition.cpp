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
     int n;
    cin >> n;
 
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
        cin >> arr[i];
 
    int sm = 0;
    for(auto it:arr)
        sm += it;
 
    int ans = 1;
    int lsm = 0;
    for(int i = 0;i+1 < n;i++){
        lsm += arr[i];
        sm -= arr[i];
        ans = max(ans, __gcd(lsm, sm));
    }
 
    cout << ans << "\n";
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}