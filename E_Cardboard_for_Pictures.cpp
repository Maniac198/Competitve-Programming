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
    int n, c; cin>>n>>c; 
    vector<int> v(n);
    for(auto &it : v) cin>>it; 

    int l = 0, r = 1e9; 
    while( l <= r){
        int mid = (l+r)/2; 
        int curr = 0; 
        bool flag = false; 
        for(auto it : v){
            int tp = (mid+it)*(mid+it);
            if( c - tp < curr){
                flag = true;
                break;
            }
            curr += tp;
        }

        
        if(flag){
            r = mid-1; 
        }
        else if(c == curr){
            cout<<mid/2<<endl;
            return;
        }
        else{
            l = mid+1;
        }
    }
}   
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}