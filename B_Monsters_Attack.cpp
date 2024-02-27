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
    int n,k; cin>>n>>k; 
    vector<pair<int,int>> v(n);
    map<int,int> mp;
    rep(i,0,n){
        v[i].second = nxt();
    }
    rep(i,0,n){
        v[i].first = nxt();
    }

    rep(i,0,n){
        mp[v[i].first] = v[i].second;
    }
    int i = 1;
    int sum = 0; 
    while(i <= n){
        sum += k;
        int curr_sum = 0;

        if(mp.count(-i)){
            curr_sum += mp[-i];
        }
        if(mp.count(i)){
            curr_sum += mp[i];
        }

        // cout<<i<<" i value " << curr_sum <<" "<<sum<<endl;
        if(curr_sum > sum){
            no; return;
        }

        sum -= curr_sum;
        i++;
    }
    yes;
    // cout<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}