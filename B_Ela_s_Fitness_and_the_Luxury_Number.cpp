#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int l,r; cin>>l>>r;

    int ans=((int)sqrtl(r)-ceil(sqrtl(l)))*3;
    int x=sqrtl(l);
    if(l>x*x){
        if(l<=x*(x+1))
            ans += 2;
        else if(l<=x*(x+2))
            ++ans;
    }
    int y=sqrtl(r);
    if(r>=y*(y+2))
        ans += 3;
    else if(r>=y*(y+1))
        ans += 2;
    else if(r>=y*y)
        ++ans;

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