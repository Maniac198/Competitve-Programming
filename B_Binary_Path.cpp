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
    int n = nxt();
    string a,b; cin>>a>>b; 
    int cnt = 0; 
    int i = 1,j = 0; 
    string ans;
    ans += a[0];
    while(i < n){
        if(a[i] == b[j]) cnt++;
        if(a[i] > b[j]) break;
        if(a[i] < b[j]) cnt = 0; 
        ans += a[i];
        i++, j++;
    }
    rep(k,j,n){
        ans += b[k];
    }

    cout<<ans<<endl;
    cout<<cnt+1<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}