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
    vector<int> v(n); 
    for(auto &it : v) cin>>it; 
    
    int a[1001] = {0};
    int gcd = 0;
    rep(i,1,n+1){
        a[v[i-1]] = i;
        gcd = __gcd(gcd,v[i-1]);
    }

    if(gcd>1){
        cout<<-1<<endl; return;
    }
    int ans = -1; 
    rep(i,1,1001){
        rep(j,1,1001){
            if(a[i]!=0 and a[j]!=0 and a[j]+a[i]>ans and __gcd(i,j) == 1){
                ans = max(ans,a[i] + a[j]);
            }
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