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

const int MAX = 2e5;
int v[MAX];
int ans[MAX];

void solve(){
    int n; cin>>n; 
    vector<int> v(n);
    
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    
    for(int i = n-1; i>=0; i--){
        ans[i] = ans[i+1] + (v[i] >= 0 ? v[i] : 0);
    }

    int result = 0;
    rep(i,0,n){
        result = max(result,ans[i+1] + (i%2 == 0 ? ans[i] : 0));
    }

    cout<<result<<endl;
}   
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}