#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vb v.begin()
#define      ve v.end()
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve(){
    int n; cin>>n; 
    map<int,int> mp;
    int m = n*(n-1)/2;
    rep(i,0,m){
        int tp; cin>>tp;
        mp[tp]++;
    }

    int ans[n];
    int cnt = n-1,j=0;
    for(auto it : mp){
        int tp = min(it.second,n-it.second);
        while(it.second){
            it.second -= cnt;
            cnt--;
            ans[j] = it.first;
            j++;
        }
    }
    ans[n-1] = 1e9;
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