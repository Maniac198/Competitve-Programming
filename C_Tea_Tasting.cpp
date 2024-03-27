#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      endl '\n';
#define      int long long
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n; cin>>n; 
    vector<int> a(n), b(n); 
    for(auto &it : a) cin>>it; 
    for(auto &it : b) cin>>it; 

    vector<int> preB(n,0);
    preB[0] = b[0];
    rep(i,1,n){
        preB[i] = preB[i-1] + b[i];
    }

    vector<int> freq(n+1,0),rem(n+1,0);
    rep(i,0,n){
        int val = a[i];
        if(i>0) val += preB[i-1];
        int ind = upper_bound(all(preB),val) - preB.begin();
        freq[ind]++;

        int rm = val;
        if(ind > 0){
            rm -= preB[ind-1];
        }
        rem[ind] += rm;
    }

    rep(i,1,n+1) freq[i] += freq[i-1];

    rep(i,0,n){
        int x = (i+1-freq[i])*b[i] + rem[i];
        cout << x << ' ';
    }
    cout << endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}