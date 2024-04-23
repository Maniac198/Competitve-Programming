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
    ll k; cin >> k;
    vector<int>v(n);
    for (int& i : v) cin >> i;
    ll l = k / 2 + (k % 2);
    ll r = k / 2;
    for (int i = 0; i < n; ++i)
    {
        if (l >= v[i])
            l -= v[i], v[i] = 0;
        else {
            v[i] -= l;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (r >= v[i])
            r -= v[i], v[i] = 0;
        else
            break;
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) if (v[i] == 0) ++cnt;
    cout << cnt << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}