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
    int n,k; cin >> n >> k;
    vector<pair<ll,ll>> v;
    vector<ll> ans(n);
    unordered_map<int,int> mp;
    rep(i,0,n){
        int tp; cin >> tp; 
        v.push_back({tp,i+1});
    }

    rep(i,0,k){
        int c,d; cin >> c >> d;
        c--; d--;
        if( v[c].first > v[d].first ){
            mp[c]++;
        }
        else if( v[c].first < v[d].first){
            mp[d]++;
        }
    }

    sort(all(v));

    rep(i,0,n){
        int p = n;
        int low = 0, high = n - 1;
        int x = v[i].first;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (v[mid].first >= x) {
                p = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1; 
            }
        }

        int ind = v[i].second;
        ans[ind-1] = p - mp[ind-1];
    }

    rep(i,0,n) cout << ans[i] << " ";
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}