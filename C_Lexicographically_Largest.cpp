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
    map<int,int> mp; 
    rep(i,0,n){
        mp[nxt()+i+1]++;
    }

    vector<int> ans;
    while(!mp.empty()){
        auto it = mp.end();
        it--;
        auto tp = *it;
        mp.erase(it);
        ans.push_back(tp.first);
        tp.second--; 
        if(tp.second > 0){
            mp[tp.first - 1] += tp.second;
        }
    }

    for(auto it : ans){
        cout<<it<<" ";
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