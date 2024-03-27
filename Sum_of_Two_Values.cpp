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
    int n,x; cin>>n>>x; 
    vector<pair<int,int>> v;
    rep(i,0,n){
        int t = nxt();
        v.push_back({t,i+1});
    }
    sort(all(v));
    int l = 0, r = n-1;
    while(l < r){
        if(v[l].first + v[r].first == x){
            cout<<v[l].second<<" "<<v[r].second<<endl;
            return;
        }
        else if(v[l].first + v[r].first > x){
            r--;
        }
        else{
            l++;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}