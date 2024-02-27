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
    string s; cin>>s; 
    map<char,int> mp;
    for(auto it : s){
        mp[it]++;
    }   
    int ans = 0; 
    for(auto it : mp){
        int req = (int) (it.first-'A');
        req++;

        if(it.second >= req) ans++;
        // cout<<it.second<<" "<<req<<" "<<it.first<<endl;
    }
    // cout<<endl;
    cout<<ans<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}   