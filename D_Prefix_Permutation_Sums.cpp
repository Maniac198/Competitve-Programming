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
    int n,m,i,j;
    cin>>n;
    vector<ll> a(n-1);
    rep(i,0,n-1) cin >> a[i];

    if (a.back()!=n*(n+1ll)/2)
    {
        vector<int> cnt(n+1);
        ll m=n*(n+1ll)/2;
        int cc=0;
        if (m<a.back()||m-a.back()>n) cc=2; else cnt[m-a.back()]++;
        for (i=1; i<n-1; i++) if (a[i]-a[i-1]>n) cc=2; else cnt[a[i]-a[i-1]]++;
        if (a[0]>n) cc=2; else ++cnt[a[0]];
        for (i=1; i<=n; i++) cc+=max(0,cnt[i]-1);
        if (cc>1) cout<<"NO\n"; else cout<<"YES\n";
    }
    else
    {
        vector<int> cnt(n+1);
        int cc=0;
        for (i=1; i<n-1; i++) if (a[i]-a[i-1]>n) ++cc;
        else ++cnt[a[i]-a[i-1]];
        if (a[0]>n) cc++; else ++cnt[a[0]];
        for (i=1; i<=n; i++) cc+=max(0,cnt[i]-1);
        if (cc>1) cout<<"NO\n"; else cout<<"YES\n";
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