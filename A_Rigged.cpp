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
    vector<pair<int,int>> v;
    int a,b; 
    for(int i = 0; i<n; i++){
        cin>>a>>b; 
        v.push_back({a,b});
    }

    pair<int,int> poly = v[0];
    int w = poly.first;
    int endu = poly.second;
    // for(auto it : v){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

    for(int i = 1; i<n; i++){
        if(v[i].first >= w && v[i].second >= endu){
            cout<<-1<<endl;
            return; 
        }
    }

    cout<<w<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}