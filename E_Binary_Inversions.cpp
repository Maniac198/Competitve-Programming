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
    int z = 0; 
    int a[n] = {0};
    vector<int> v(n),b(n),c(n);

    rep(i,0,n){
        int tp = nxt();
        if(tp == 0) z++;
        a[i] = z; 
        v[i] = tp;
    }

    b.assign(all(v));
    c.assign(all(v));

    int ans1 = 0, ans2 = 0, ans3 = 0;

    rep(i,0,n){
        if(v[i] == 1) ans1 += (z-a[i]);
    }

    rep(i,0,n){
        if(v[i] == 0){
            b[i] = 1; break;
        }
    }

    z = 0;
    rep(i,0,n){
        if(b[i] == 0) z++;
        a[i] = z; 
    }

    rep(i,0,n){
        if(b[i] == 1) ans2 += (z-a[i]);
    }

    rep(i,n,0){
        if(v[i] == 1){
            c[i] = 0; break;
        }
    }

    z = 0;
    rep(i,0,n){
        if(c[i] == 0) z++;
        a[i] = z; 
    }

    rep(i,0,n){
        if(c[i] == 1) ans3 += (z-a[i]);
    }

    cout<<max({ans3,ans2,ans1})<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}