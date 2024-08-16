#include <bits/stdc++.h>
using namespace std;
 
#define     yes {cout<<"YES"<<endl;}
#define     no {cout<<"NO"<<endl;}
#define     int long long 
#define     endl '\n';
#define     all(x) x.begin(),x.end()
#define     rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
#define     what_is(x) cerr << #x << " is " << x << endl;
int         lcm(int a,int b) { return a / gcd(a,b)*b; }
int         nxt(){ int x; cin>>x; return x;}
const       int MOD = 1e9 + 7;
 
void solve(){
    int n; cin >> n; 
    vector<int> v(n);
    for(auto & it : v) cin >> it; 

    if( n >= 3 ){
        no; return;
    }
    else{
        int diff = abs(v[0] - v[1]);
        if( diff > 1 ){
            yes; return;
        }
        else{
            no; return;
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