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
int mod_mul(int a,int b){return (a*b)%MOD;}
int mod_add(int a,int b){return (a+b)%MOD;}
int mod_sub(int a,int b){return (a-b)%MOD;}
int power(int a, int b, int m) { a %= m; if (a==1 || b==0)return 1; int res=power(a,b/2,m); res%=m; if (b%2==1){ return ((res*res)%m*a)%m; } return (res*res)%m; }

void solve(){
    int n, k; cin>>n>>k; 
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin>>v[i];

    int mx=0;
    rep(i,0,n){mx+=v[i];if(mx<0)mx+=MOD;}

    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + v[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    int ans=0;
    if(max_so_far>0){
        max_so_far%=MOD;
        int ptwo=mod_sub(power(2,k,MOD),1);
        ans=mod_mul(max_so_far,ptwo);
        ans=mod_add(ans,mx);
        if(ans<0)ans+=MOD;
    }
    else{
        ans=mx;
        if(ans<0)ans+=MOD;
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