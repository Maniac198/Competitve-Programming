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

    int a,b; cin>>a>>b;
    
    vector<int> aa(a),bb(b);
    for(auto &it:aa) cin>>it;
    for(auto &it:bb) cin>>it;

    int xr = 0, o = 0; 

    for(auto it : aa) xr^=it;
    for(auto it : bb) o |= it; 

    int xrr = 0; 
    for(auto it : aa) xrr ^= (it|o);

    cout<<min(xr,xrr)<<" "<<max(xr,xrr)<<endl;

}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}