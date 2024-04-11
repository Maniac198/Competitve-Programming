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
    vector<int> a(n), b(n); 
    for(auto &it : a) cin >> it; 
    for(auto &it : b) cin >> it; 

    map<int,int> ma,mb; 
    for(int i = 0; i < n; i=i+2){
        ma[a[i]]++;
        ma[b[i]]--;
    }
    for(int i = 1; i < n; i=i+2){
        mb[a[i]]++;
        mb[b[i]]--;
    }

    int ans = 0; 
    for(auto it : ma) ans += (abs(it.second));
    for(auto it : mb) ans += (abs(it.second));

    cout << ans/2 << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}