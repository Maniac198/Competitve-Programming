#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      ll long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n, m;
    cin >> n >> m;
 
    vector<int> a(n);
    vector<vector<int>> pos(m);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        pos[a[i] % m].emplace_back(i);
    }
 
    ll answer = 0;
    int target = n / m;
 
    vector<pair<int, int>> aval;
    for (int r = 0; r < 2; ++r)
    {
        for (int i = 0; i < m; ++i)
        {
            while ((int)pos[i].size() > target)
            {
                int x = pos[i].back();
                pos[i].pop_back();
                aval.emplace_back(x, i);
            }
 
            while ((int)pos[i].size() < target && !aval.empty())
            {
                auto [x, j] = aval.back();
                aval.pop_back();
 
                pos[i].emplace_back(x);
                a[x] += (i - j + m) % m;
                answer += (i - j + m) % m;
            }
        }
    }
 
    cout << answer << "\n";
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " \n"[i == n - 1];
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}