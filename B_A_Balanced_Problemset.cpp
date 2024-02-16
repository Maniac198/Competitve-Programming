#include <bits/stdc++.h>
using namespace std;

#define      yes cout<<"YES"<<endl
#define      no cout<<"NO"<<endl
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vb v.begin()
#define      ve v.end()
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve(){
    int n, x; cin>>x>>n; 

    int ans = 1; 
    for(int i = 1; i*i<=x ; i++){
        if(x%i == 0){
            if(n<=x/i) ans = max(ans,i);
            if(n<=i) ans = max(ans,x/i);
        }
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