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
    vector<pair<int,int>> a;
    vector<int> b; 
    for (int i = 0; i < n; i++)
    {
        int tp; cin>>tp;
        a.push_back({tp,i});
    }

    sort(a.begin(),a.end());

    for(int i = 0; i<n; i++){
        int tp; cin>>tp;
        b.push_back(tp);
    }

    for(int i = 0; i<n; i++){
        cout<<a[i].first<<" ";
    }
    cout<<endl;
    vector<int> ans;
    for(int i =0 ; i<n; i++){
        cout<<b[a[i].second]<<" ";
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