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
    int aa = 0, ad = 0, ba = 0, bd = 0;
    rep(i,0,n) aa += nxt();
    rep(i,0,n) ad += nxt();
    rep(i,0,n) ba += nxt();
    rep(i,0,n) bd += nxt();

    if( aa > ba && ad > bd ){
        cout << "A" << endl;
    }
    else if( aa < ba && ad < bd ){
        cout << "P" << endl;
    }
    else{
        cout << "DRAW" << endl;
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}