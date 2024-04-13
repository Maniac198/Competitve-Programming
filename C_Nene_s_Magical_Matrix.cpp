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

    int ans = 0; 
    for(int i = 1; i <= n; i++) ans += ( i * (2*i - 1 ) );

    cout << ans << " " << n+n << endl;

    for(int i = 1; i <= n; i++){
        cout << 1 << " " << i << " ";
        rep(i,n+1,1) cout << i << " ";
        cout << endl;
        cout << 2 << " " << i << " ";
        rep(i,n+1,1) cout << i << " ";
        cout << endl;
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}