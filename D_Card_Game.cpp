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
    int n; cin >> n;
    char t; cin >> t;
    vector<string> s(2 * n);
    for (int i = 0; i < 2 * n; i++) {
      cin >> s[i];
    }

    sort(s.begin(), s.end(), [&](string a, string b) {
      if ((a[1] == t) != (b[1] == t)) {
        return b[1] == t;
      }
      if (a[1] != b[1]) {
        return a[1] < b[1];
      }
      return a[0] < b[0];
    });

    vector<bool> alive(2 * n, true);
    vector<pair<string, string>> res;

    for (int i = 0; i < 2 * n; i++) {
      if (alive[i]) {
        for (int j = i + 1; j < 2 * n; j++) {
          if (alive[j] && (s[j][1] == t || s[j][1] == s[i][1])) {
            res.emplace_back(s[i], s[j]);
            alive[i] = false;
            alive[j] = false;
            break;
          }
        }
      }
    }

    if (res.size() < n) {
      cout << "IMPOSSIBLE" << '\n';
    } 
    else {
      for (int i = 0; i < n; i++) {
        cout << res[i].first << " " << res[i].second << '\n';
      }
    }

}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}