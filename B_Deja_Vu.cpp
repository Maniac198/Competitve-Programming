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
    int a,b ; cin>>a>>b; 
    vector<int> n(a);
    vector<int> v;
    for(auto &it : n) cin>>it;
    
    for(int i=0;i<b;i++){
        int x ; cin >> x ;
        if(v.empty()||v.back()>x) v.push_back(x);
    }


    for(int i = 0; i<v.size(); i++){
        int div = 1<<v[i];
        int add = 1<<(v[i]-1);
        for(int j = 0; j<a; j++){
            if(n[j] % div == 0){
                n[j] += add; 
            } 
        }
        // cout<<div<<" "<<add<<endl;
    }

    for(int i = 0; i<a; i++){
        cout<<n[i] <<" "; 
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