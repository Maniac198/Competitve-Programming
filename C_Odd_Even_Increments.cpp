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
    int n; cin >> n; 
    vector<int> v(n); 
    rep(i,0,n) cin >> v[i];

    bool od = v[0] & 1; 
    bool ev = v[1] & 1; 
    bool a = true, b = true;

    for(int i = 0; i < n; i = i+2 ){
        if(v[i]&1 ^ od){
            a = false; break;
        }
    }

    for(int i = 1; i < n; i = i+2 ){
        if(v[i]&1 ^ ev){
            b = false; break;
        }
    }

    if( a and b ){
        yes; return;
    }

    no; 
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}