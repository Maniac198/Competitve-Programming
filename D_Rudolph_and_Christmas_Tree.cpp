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
    int n, d, h;
    cin >> n >> d >> h;
    vector<int> y(n);
    for(int i = 0; i < n; i++){
        cin >> y[i];
    }
    long double ans = (long double)d * h / 2.0;
    for (int i = 0; i + 1 < n; ++i) {
        if (y[i + 1] >= y[i] + h) ans += (long double)d * h / 2.0;
        else{
            long double d2 = (long double)d * (y[i] + h - y[i + 1]) / h;
            long double nh = y[i + 1] - y[i];
            ans += (d + d2) / 2.0 * nh;
        }
    }
    cout << setprecision(10);
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