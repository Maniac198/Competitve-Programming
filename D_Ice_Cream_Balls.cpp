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

    int left = 2;
    int right = 2e9;
    int mid;
    int ans = 2;
    while(left <= right){
        mid = (left+right)/2;
    
        if(mid*(mid-1)/2 <=n){
            int sum = (mid*(mid-1))/2;
            ans = mid+n-sum;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout<<ans<<endl; 
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}