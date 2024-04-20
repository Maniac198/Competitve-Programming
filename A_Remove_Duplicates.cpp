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
    vector<int> v(10001);
    vector<int> ans(n), res;
    rep(i,0,n) cin >> ans[i];

    rep(i,n,0){
        int tp = ans[i];
        if( v[tp] > 0 ){
            continue;
        }
        else{
            res.push_back(tp);
            v[tp]++;
        }
    }

    cout << res.size() << endl;
    reverse(all(res));
    for(auto it : res)  cout << it << " ";
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}