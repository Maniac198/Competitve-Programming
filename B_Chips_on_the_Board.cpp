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
    vector<int> a(n);
    vector<int> b(n);

    for(auto &it : a) cin>>it; 
    for(auto &it : b) cin>>it; 

    int suma = 0; 
    suma = accumulate(a.begin(),a.end(),suma);

    int sumb = 0; 
    sumb = accumulate(b.begin(),b.end(),sumb);

    int mina = *min_element(a.begin(),a.end());
    int minb = *min_element(b.begin(),b.end());

    int ans = min(mina*n+sumb,minb*n+suma);
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