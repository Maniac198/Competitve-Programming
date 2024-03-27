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
    int n = nxt();
    vector<pair<int,int>> v;
    rep(i,0,n){
        int a = nxt(), b = nxt();
        v.push_back({a,b});
    }

    sort(all(v),[&](const pair<int,int> a, const pair<int,int> b){
        if(a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });

    int cnt = 1; 
    int prev = v[0].second;
    rep(i,1,n){
        if(prev <= v[i].first){
            prev = v[i].second;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}