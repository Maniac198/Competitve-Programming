#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    vector<string> v(8); 
    rep(i,0,8) cin>>v[i];

    rep(i,0,8){
        int cntr = count(all(v[i]),'R');
        if(cntr == 8){
            cout<<'R'<<endl; return;
        }
    }

    rep(i,0,8){
        int cntb = 0;
        rep(j,0,8){
            if(v[j][i] == 'B') cntb++;
        }

        if(cntb == 8){
            cout<<'B'<<endl; return;
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