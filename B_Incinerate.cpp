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
    vector<pair<int,int>> m(n);
    multiset<int> ms;
    rep(i,0,n) cin >> m[i].first;
    rep(i,0,n) cin >> m[i].second;
    
    rep(i,0,n){
        ms.insert(m[i].second);
    }   

    sort(all(m));
    int done = 0;
    int curr = k;

    while (k>0) {
        if(done>=n){
            break;
        }
    
        while (m[done].first <= curr) {
            if(done>=n) break;
        
            auto it = ms.find(m[done].second);
            ms.erase(it);
            done++;
        }
    
        k -= *(ms.begin());;
        curr += k;
  }
 
  if(done>=n){
    cout<<"YES\n"; return;
  }

  cout<<"NO\n";
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}