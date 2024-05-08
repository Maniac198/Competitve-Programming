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

bool cmp(const pair<pair<ll,ll>,ll> &a, const pair<pair<ll,ll>,ll> &b){
    if (a.first.first != b.first.first) {
        // Sort by first.first in decreasing order
        return a.first.first > b.first.first;
    } else {
        // If first.first are equal, sort by first.second in increasing order
        return a.first.second < b.first.second;
    }
}

void solve(){
    ll n; cin >> n; 
    vector<pair<pair<ll,ll>,ll>> v;
    rep(i,0,n){
        ll tp; cin >> tp; 
        ll temp = tp;
        ll tw = 0, th = 0;
        while( temp%2 == 0){
            tw++;
            temp/=2;
        }
        while ( temp%3 == 0 ){
            th++;
            temp/=3;
        }

        v.push_back({{th,tw},tp});
    }

    sort(all(v),cmp);

    for(auto it : v) cout << it.second << " ";
    cout << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}