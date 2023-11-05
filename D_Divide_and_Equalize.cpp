#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vb v.begin()
#define      ve v.end()
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void divi(int n,unordered_map<int,int> &mp){
    int i = 2; 
    while(i * i <= n){
        while(n%i == 0){
            mp[i]++;
            n /= i;
        }
        i++;
    }

    if(n>1) mp[n]++;
}

void solve(){
    int n; cin>>n; 
    vector<int> v(n);
    for(auto &it : v) cin>>it; 

    unordered_map<int,int> mp;
    for(auto it : v){
        divi(it,mp);
    }

    for(auto it : mp){
        if(it.second%n != 0){
            no; 
            return; 
        }
    }

    yes;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}