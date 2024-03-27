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
    int n; cin>>n; 
    int a = 1e9, b = 1e9, c = 1e9;
    while(n--){
        int p = nxt();
        string s; cin>>s; 
        if(s == "01"){
            a = min(a,p);
        }
        else if(s == "10"){
            b = min(b,p);
        }
        else if(s == "11"){
            c = min(c,p);
        }
    }

    int ans = min({a+b,c});
    if( ans >= 1e9){
        cout<<-1<<endl;
        return;
    }

    cout<<ans<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}