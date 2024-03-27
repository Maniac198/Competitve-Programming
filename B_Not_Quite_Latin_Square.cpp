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
    string s[3];
    rep(i,0,3) cin>>s[i];
    int j = 0;
    rep(i,0,3){
        rep(k,0,3){
            if(s[i][k] == '?'){
                j = i; 
                break;
            }
        }
    }

    if(s[j].find('A') == string::npos){
        cout<<'A'<<endl;
    }
    else if(s[j].find('B') == string::npos){
        cout<<'B'<<endl;
    }
    else{
        cout<<'C'<<endl;
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