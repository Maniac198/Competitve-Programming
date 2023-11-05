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

void solve(){
    int n; cin>>n; 
    map<int,int> mp; 
    for(int i = 0; i<n; i++){
        int tp; cin>>tp; 
        mp[tp]++;
    }

    if(n == 2){
        yes;
        return;
    }
    else if( mp.size() == 2 ){
        auto it1 = mp.begin();
        auto it2 = it1 ++;

        if(abs(it1->second - it2->second) <= 1){
            yes; 
            return;
        }
    }
    else if( mp.size() == 1){
        yes; 
        return;
    }


    no; 
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}