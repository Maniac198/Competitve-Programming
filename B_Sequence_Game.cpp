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

    vector<int>v(n);
    rep(i,0,n){
        cin>>v[i];
    }

    vector<int> sol;
    sol.push_back(v[0]);

    rep(i,1,n){
        if(v[i-1] > v[i]){
            sol.push_back(1);
        }
        sol.push_back(v[i]);
    }
    
    cout<<sol.size()<<endl;
    rep(i,0,sol.size()){
        cout<<sol[i]<<" ";
    }
    cout<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}