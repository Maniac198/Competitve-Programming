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
    int n = nxt(), q = nxt();
    int v[n];
    vector<int> a(n+1,0);
    vector<int> ones(n+1,0);
    rep(i,0,n){
        cin>>v[i];
        a[i+1] = a[i] + v[i];
        ones[i+1] = ones[i] + (v[i]==1);
    }

    while (q--) {
        int l, r; cin >> l >> r; 
        int len = r-l+1;
        int sum = a[r] - a[l-1];
        int one = ones[r] - ones[l-1];
        int req = one*2 + (len-one);
        if(sum >= req and len>1){
            yes;
        }
        else{
            no;
        }
    }
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}