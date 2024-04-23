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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      a[i] = int(s[i] - '0');
    }
    for (int k = n; k >= 1; k--) {
      vector<int> b(n + 1);
      int v = 0;
      bool ok = true;
      for (int i = 0; i < n; i++) {
        v ^= b[i];
        if (v == a[i]) {
          if (i > n - k) {
            ok = false;
            break;
          }
          v ^= 1;
          b[i + k] ^= 1;
        }
      }
      if (ok) {
        cout << k << '\n';
        break;
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