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
    vector<int> ans(n);

    ans[0] = 10;
    ans[1] = 11;

    rep(i,2,n){
        ans[i] = ans[i-1]+1; 
        while(3*ans[i] % (ans[i-1] + ans[i-2] == 0)){
            ans[i]++;
        }
    }

    rep(i,0,n){
        cout<<ans[i]<<" ";
    }

    cout<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}