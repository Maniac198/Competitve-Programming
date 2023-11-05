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
    int n,h; cin>>n>>h;
    vector<int> v(n);
    for(auto &it : v) cin>>it; 

    int low = 1; 
    int high = h; 

    while(low <= high){
        int mid = low+(high-low)/2;
        int damage = 0;
        
        for(int i = 0; i<n-1; i++){
            damage += (v[i]+mid>v[i+1] ? v[i+1]-v[i] : mid);
        }
        damage += mid;
        if(damage>=h) high = mid-1;
        else low = mid + 1;
    }

    cout<<low<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}