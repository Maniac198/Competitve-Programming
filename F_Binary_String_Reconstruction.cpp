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
    if (b == 0) {
        if (a != 0) {
            cout << string(a + 1, '0') << endl;
        } else {
            cout << string(c + 1, '1') << endl;
        }
        return;
    }

    string oz;
    rep(i,0,b+1){
        if(i&1) oz+='0';
        else oz+='1';
    }
    oz.insert(1,string(a,'0'));
    oz.insert(0,string(c,'1'));
    cout << oz << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}