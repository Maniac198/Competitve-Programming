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
    int n,k,x; cin>>n>>k>>x;

    if(k-1 < n && k-1<=x){
        int ans = (k*(k-1))/2;
        // cout<<ans<<endl;
        // cout<<(n-k)*(k-1)<<endl;
        ans += (k == x || k-1==x) ? (n-k)*(k-1) : (n-k)*x;
        cout<<ans<<endl;
        return;
    }

    cout<<-1<<endl;
    return;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}