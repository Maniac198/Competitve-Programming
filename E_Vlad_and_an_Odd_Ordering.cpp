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
    int n, k; cin>>n>>k; 
    for(int i = 1; i<=log2(n)+1; i++){
        int x = pow(2,i);
        int y = (n + (x/2))/x; 
        if(k <= y){
            if( k == 1){
                cout<<x/2<<endl;
                return;
            }
            else{
                int ans = (x/2) + ((k-1) * x); 
                cout<<ans<<endl;
                return;
            }
        }
        else{
            k -= y;
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