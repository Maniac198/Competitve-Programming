#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vb v.begin()
#define      ve v.end()
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve(){
    int a,b; cin>>a>>b; 

    int d[3] = {0};

    for(int i = 0; i<3; i++){
        int p,q; cin>>p>>q;
        d[i] = abs(p-a) + abs(b-q);
    }

    if(d[0] == d[1] || d[0] == d[2]){
        cout<<d[0] * d[0]<<endl;
        return;
    }
    
    cout<<d[1] * d[1] <<endl;
}  
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}