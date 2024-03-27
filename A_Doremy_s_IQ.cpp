#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      ll long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n,q; cin >> n >> q; 
    vector<int> v(n);
    rep(i,0,n) cin >> v[i];

    int cnt = 0; 
    string ans;
    rep(i,0,n){
        if(cnt == q){
            if(v[n-i-1] <= cnt) ans += '1';
            else ans += '0';
            continue;
        }

        if( v[n-i-1] >= cnt+1 ) cnt++;

        ans += '1';
    }

    reverse(all(ans));
    cout << ans << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}