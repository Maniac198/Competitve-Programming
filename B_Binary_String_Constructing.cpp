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
    int a, b, c; cin >> a >> b >> c; 
    string ans;
    if( a >= b ){
        rep(i,0,c+1){
            if( i%2 == 0 ){
                ans += '0'; a--;
            }
            else{
                ans += '1'; b--;
            }
        }

        if( (c+1)&1 ){
            if(a>0) ans.insert(0,string(a,'0'));
            int sz = ans.size();
            if(b>0) ans.insert(sz-1,string(b,'1'));
        }
        else{
            if(a>0) ans.insert(0,string(a,'0'));
            int sz = ans.size();
            if(b>0) ans.insert(sz-1,string(b,'1'));
        }
    }
    else{
        rep(i,0,c+1){
            if( i%2 == 0 ){
                ans += '1'; b--;
            }
            else{
                ans += '0'; a--;
            }
        }

        if( (c+1)&1 ){
            if(b>0) ans.insert(0,string(b,'1'));
            int sz = ans.size();
            if(a>0)ans.insert(sz-1,string(a,'0'));
        }
        else{
            if(b>0) ans.insert(0,string(b,'1'));
            int sz = ans.size();
            if(a>0) ans.insert(sz-1,string(a,'0'));
        }
    }

    cout << ans << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}