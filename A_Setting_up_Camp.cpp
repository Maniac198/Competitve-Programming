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
    int a,b,c; cin>>a>>b>>c; 

    int ans = a + b/3; 
    int rem = b%3; 

    if(rem == 0){
            ans += ((c+2)/3);
    }
    else if(rem == 1){
        if(c<2){
            ans = -1;
        }
        else{
            c -= 2; 
            ans += (1 + (c+2)/3);
        }
    }
    else{
        if(c<1){
            ans = -1; 
        }
        else{
            c -= 1; 
            ans += (1 + (c+2)/3);
        }
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