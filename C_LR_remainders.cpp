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
    int n,m; cin>>n>>m; 
    vector<int> v(n);
    for(auto &it : v) cin>>it;
    string s; cin>>s; 
    int l = 0, r = n-1; 
    rep(i,0,n-1){
        if(s[i] == 'L') l++;
        else r--;
    }

    vector<int> ans;
    int tp = v[l]%m; 
    ans.push_back(tp);
    rep(i,n-1,0){
        if(s[i] == 'L'){
            l--;
            tp = (tp * (v[l] % m) )% m;
            ans.push_back(tp);
        }
        else{
            r++;
            tp = (tp * (v[r] % m) )% m; 
            ans.push_back(tp);
        }
    }

    reverse(all(ans));
    for(auto it : ans) cout<<it<<" ";
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