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
    string s; cin >> s; 

    int r = 0, b = 0;
    rep(i,0,n){
        if( s[i] == 'W' ){
            if( (b==0 and r!=0) || (b!=0 and r==0) ){
                no; return;
            }
            r = 0; b = 0;
        }
        else if( s[i] == 'B'){
            b++;
        }
        else r++;
    }

    if( (b==0 and r!=0) || (b!=0 and r==0) ){
        no; return;
    }
    yes;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}