#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n,m; cin>>n>>m; 
    multiset<int> ms;
    rep(i,0,n){
        int h; cin>>h; 
        ms.insert(h);
    }

    rep(i,0,m){
        int t; cin>>t;
        auto it = ms.upper_bound(t);
        if(it == ms.begin()){
            cout<<-1<<endl;
        }
        else{
            cout<<*(--it)<<endl;
            ms.erase(it);
        }
    }

}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}