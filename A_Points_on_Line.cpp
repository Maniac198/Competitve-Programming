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
    int n,d; cin >> n >> d; 
    vector<int> a(n); 
    rep(i,0,n) cin >> a[i];
    int i = 0;
    long long ans = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < n && a[j] - a[i] <= d) {
            ++j;
        }
        long long m = j - i - 2;
        ans += m * (m + 1) / 2;
    }
    printf("%I64d\n", ans);
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; t = 1; 
    while(t--){
        solve();
    }
}