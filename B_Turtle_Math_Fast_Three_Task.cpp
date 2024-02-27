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
    vector<int> v(n);
    for(auto &it : v) cin>>it; 
    int sum = 0; 
    int mod1 = 0;
    rep(i,0,n){
        sum += v[i];
        if(v[i]%3==1) mod1 ++;
    }

    if( sum % 3 == 0){
        cout<<0<<endl; return;
    }
    else if(sum % 3 == 1){   
        if(mod1){
            cout<<1<<endl; return;
        }
        else{
            cout<<2<<endl; return;
        }
    }
    else{
        cout<<1<<endl;
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