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
    int n, k; cin>>n>>k; 
    vector<int> a(n);
    for(auto &it : a) cin>>it; 

    int last = n-1; 
    k = min(k,n);
    for(int i = 0; i<k ;i++){
        if(a[last] > n){
            no; 
            return ; 
        }

        last += n-a[last];
        if(last >= n){
            last -= n; 
        }
    }

    yes; 
    return;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}