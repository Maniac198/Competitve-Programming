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
    int a; cin>>a;
    vector<int> v(a);
    rep(i,0,a){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int count = 1;
    rep(i,0,a){
        if(v[i] >= count) count++;
    }

    cout<<count-1;
}
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}