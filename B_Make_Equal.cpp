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
    vector<int> v(n); 
    for(auto &it : v) cin>>it;
    int sum = accumulate(v.begin(),v.end(),0);
    int nsum = sum;
    for(int i = n-1; i>0; i--){
        nsum -= v[i];
        if(nsum/i >= sum/n){
            continue;
        }
        else{
            no; return;
        }
    }
    yes; 
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}