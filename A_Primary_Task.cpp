#include <bits/stdc++.h>
using namespace std;
 
#define     yes {cout<<"YES"<<endl;}
#define     no {cout<<"NO"<<endl;}
#define     ll long long 
#define     endl '\n';
#define     all(x) x.begin(),x.end()
#define     rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
// int         lcm(int a,int b) { return a / gcd(a,b)*b; }
int         nxt(){ int x; cin>>x; return x;}
const       int MOD = 1e9 + 7;
#define     what_is(x) cerr << #x << " is " << x << endl;
 
void solve(){
    string s; cin >> s; 
    if( s.size() < 3){
        no; return;
    }

    if( s[0] == '1' && s[1] == '0' && s[2] != '0'){
        if( s[2] >= '2' || s.size() > 3 ){
            yes; return;
        }
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