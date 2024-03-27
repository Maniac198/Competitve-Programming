#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n,l; cin>>n>>l; 
    vector<pair<int,int>> v; 
    rep(i,0,n){
        v.push_back({nxt(),nxt()});
    }

    sort(all(v),[&](const pair<int,int> &a, const pair<int,int> &b){
        return a.second < b.second;
    });

    int ans = 0; 
    for(int i = 0; i<n; i++){
        priority_queue<int> pq;
        int sum = 0;
        for(int j = i; j<n ; j++){ 
            sum += v[j].first;
            pq.push(v[j].first);
            while(!pq.empty() && sum + v[j].second - v[i].second > l){
                sum -= pq.top();
                pq.pop();
            }
            ans = max(ans,(int) pq.size());
        }
    }

    cout<<ans<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}