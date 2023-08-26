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
    int n; cin>> n;
    vector<int> v(n);
    rep(i,0,n){
        cin>>v[i];
    }

    int ans = 2*n-1+v[0];
    int sum = 0;
    rep(i,0,n-1){
        sum += abs(v[i+1]-v[i]);
    }

    cout<<ans+sum;
}
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}