#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n; cin >> n; 
    int p = 0, count_negative = 0, mn = 1e9;
    rep(i,0,n){
        int tp; cin >> tp;
        if( tp < 0 ) count_negative++;
        mn = min(mn,abs(tp));
        p += abs(tp);
    }

    if( count_negative&1 ){
        cout << p - 2*mn << endl;
    }
    else{
        cout << p << endl;
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