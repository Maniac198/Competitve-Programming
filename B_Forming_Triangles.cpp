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
    
    map<int,int> mp; 
    rep(i,0,n){
        int tp; cin>>tp; 
        mp[tp]++;
    }
    
    int res = 0, cnt = 0;
    for(auto it : mp){
        if(it.second >= 3) res = res + (it.second*(it.second-1)*(it.second-2))/6;

        if(it.second >= 2){
            int a = (it.second * (it.second-1))/2;
            int b = cnt;

            res += (a*b);
        }

        cnt += it.second;
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