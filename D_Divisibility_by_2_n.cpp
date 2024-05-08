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
    vector<int> a(n + 1, 0);
    int twos = 0;
    for (int i = 1; i <= n; i++) {
      int x; cin >> x;
      while (x % 2 == 0) {
        twos++;
        x /= 2;
      }
      x = i;
      while (x % 2 == 0) {
        a[i]++;
        x /= 2;
      }
    }
    sort(a.rbegin(), a.rend());
    int ans = 0;
    for (auto x: a) {
      if (twos >= n) break;
      ++ans;
      twos += x;
    }
    if (twos < n) ans = -1;
    cout << ans << '\n';
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}