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
    int n, m, h; cin >> n >> m >> h; 
    pair<int, long long> rud;
    int ans = 1;

    for(int i = 0; i < n; i++){
        vector<int> cur(m);
        for(int j = 0; j < m; j++){
            cin >> cur[j];
        }
        std::sort(cur.begin(), cur.end());
        int task_cnt = 0;
        long long penalty = 0, sum = 0;
        for(int j = 0; j < m; j++){
            if (sum + cur[j] > h) break;
            sum += cur[j];
            penalty += sum;
            task_cnt++;
        }
        if (i){
            if (make_pair(-task_cnt, penalty) < rud) ans++;
        } 
        else rud = {-task_cnt, penalty};
    }
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