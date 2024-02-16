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
    int n; cin>>n; 
    vector<int> v(n);
    for(auto & it : v) cin>>it; 
    
    int ans = 0;
    int sl = INT_MAX, tl = INT_MAX;

    for(int i = 0; i<n; i++){

        if(sl > tl) swap(sl,tl);
        if(v[i] <= sl){
            sl = v[i];
        }
        else if(v[i] <= tl){
            tl = v[i];
        }
        else{
            ans ++;
            sl = v[i];
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