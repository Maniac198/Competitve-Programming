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
    int n; cin>>n;
    vector<int> v(n+1,0);

    for (int i = 1; i <= n; i++){   
        int tp; cin>>tp;
        
        v[i] = v[i-1] + (i & 1 ? -tp : tp );
    }
    
    sort(v.begin(),v.end());

    for (int i = 1; i <= n; i++){
        if(v[i] == v[i-1]){
            yes;
            return;
        }
    }

    no;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}