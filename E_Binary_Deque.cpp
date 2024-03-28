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
    int n,s; cin >> n >> s; 
    vector<int> v(n), pre(n);
    rep(i,0,n) cin >> v[i];

    int sum = accumulate(all(v),0); 
    if( sum < s ){
        cout << -1 << endl;
        return;
    }

    unordered_map<int, int> sum_index_map;
    int maxLen = 0;
    int prefix_sum = 0;

    for (int i = 0; i < n; ++i) {
        prefix_sum += v[i];

        if (prefix_sum == s) {
            maxLen = i + 1;
        }

        if (sum_index_map.find(prefix_sum - s) != sum_index_map.end()) {
            maxLen = max(maxLen, i - sum_index_map[prefix_sum - s]);
        }

        if (sum_index_map.find(prefix_sum) == sum_index_map.end()) {
            sum_index_map[prefix_sum] = i;
        }
    }

    cout << n - maxLen << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}