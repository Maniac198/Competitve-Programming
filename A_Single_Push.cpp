#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve()
{
    int n; cin >>n; 
    vector<int> a(n),b(n);

    rep(i,0,n) cin>>a[i];
    rep(i,0,n) cin>>b[i];

    rep(i,0,n){
        b[i] -= a[i];
        if(b[i] < 0){
            no 
            return;
        }
    }

    int flag = 0;
    rep(i,0,n){
        if(b[i]==b[i-1]) continue;
        if(b[i]>0) flag++;
    }

    if(flag<=1){
        yes
    }else{
        no
    }
}
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}