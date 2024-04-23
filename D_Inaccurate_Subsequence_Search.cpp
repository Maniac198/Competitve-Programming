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
    int n, m, k; cin >> n >> m >> k;
    map<ll, ll> mp1, mp2;
    vector<int> a(n), b(m);
    rep(i, 0, n){
        cin >> a[i];
    }
    
    rep(i, 0, m){
        cin >> b[i];
        mp1[b[i]]++;
    }

    ll temp = 0, ans = -1;
    rep(i, 0, m){
        mp2[a[i]]++;
    }

    for (auto it : mp1){
        int val = it.first;
        if (mp2.count(val)){
            temp += min(mp1[val], mp2[val]);
        }
    }
    
    if (temp >= k){
        ans++;
    }

    for (int i = 0; i < n - m; i++)
    {
        if (a[i] != a[i + m])
        {
            temp -= min(mp1[a[i + m]], mp2[a[i + m]]);
            temp -= min(mp1[a[i]], mp2[a[i]]);
            mp2[a[i + m]]++;
            mp2[a[i]]--;
            temp += min(mp1[a[i]], mp2[a[i]]);
            temp += min(mp1[a[i + m]], mp2[a[i + m]]);
        }
        if (temp >= k)
        {
            ans++;
        }
    }

    cout << ans + 1 << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}