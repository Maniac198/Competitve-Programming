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
    vector<int> c(n+1,0),ans(n+1,0);
    rep(i,0,n){
        int tp = nxt();
        if( tp <= n ){
            c[tp]++;
        }
    }
      
    for(int i = 1; i<=n; i++){
        int currMult = i; 
        while(currMult<=n){
            ans[currMult] += c[i];
            currMult += i;
        }
    }
    cout<<*max_element(all(ans))<<endl;

}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}