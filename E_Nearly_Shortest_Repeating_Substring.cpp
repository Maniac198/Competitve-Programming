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
    int n; cin >> n; 
    string s; cin >> s;

    for (int len = 1; len <= n; len++) {
      if (n % len == 0) {
        int sum = 0;
        for (int r = 0; r < len; r++) {
          vector<int> cnt(26, 0);
          int mx = 0;
          for (int i = r; i < n; i += len) {
            int c = int(s[i] - 'a');
            cnt[c] += 1;
            mx = max(mx, cnt[c]);
          }
          sum += mx;
        }
        if (sum >= n - 1) {
          cout << len << '\n';
          break;
        }
      }
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}