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
    int n; cin>>n;
    vector<int> v(n);
    for(auto &it : v) cin>>it; 
    int sum = 0, k = 0, cnt = 0; 
    
    for(int i = 0; i<n; i++){
        if(v[i] > 0){
            if(cnt) k++;
            cnt = 0;
        }
        else if(v[i] < 0){
            cnt++;
        }
        sum += abs(v[i]);
    }
    if(cnt) k++;
    cout<< sum <<" "<< k <<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}