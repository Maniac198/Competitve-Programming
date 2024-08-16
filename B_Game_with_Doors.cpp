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
    int a,b,c,d; cin >> a >> b >> c >> d;
    
    int required = 0;
    if(d > b) required++;
    if(b > d) required++;
    if(a < c) required++;
    if(c < a) required ++;

    if(min(d,b) - max(a,c) >= 0){
        if(b != c){
            cout <<  min(b,d) - max(c,a) + required << endl;
            return;
        }
        else{
            cout << 2 << endl;
            return;
        }
    }
    else{
        cout << 1 <<endl;
        return;
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

