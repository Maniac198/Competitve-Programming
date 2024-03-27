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

int func(int par, int child, vector<vector<int>> &a, int m, int &cnt){
    int ans = 1;
 
    for (auto i:a[child])
    {
        if(i != par){
            int sa = func(child, i, a, m, cnt);
            if(sa >= m){
                cnt++;
                sa = 0;
            }
 
            ans += sa;
        }
    }
 
    if(par == child){
        if(ans < m){
            cnt--;
        }
    }
 
    return ans;
}
 
void solve(){
 
    int n, e, k;
    cin >> n >> k;
    e = n-1; // For Tree
 
    // For Graph;
    // cin >> e; 
 
    vector<vector<int>> a (n+1);
 
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
 
    int l = 1;
    int r = n;
 
    int ans = 0;
 
    while(l <= r){
        int m = (l + r)/2;
 
        int cnt = 0;
 
        func(1, 1, a, m, cnt);
 
        if(cnt >= k){
            ans = m;
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
 
    cout << ans << "\n";
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}