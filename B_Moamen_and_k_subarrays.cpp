#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      int long long 
#define      endl '\n'
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve()
{
    int n,k; cin>>n>>k;
    vector<pair<int,int>> v(n);

    rep(i,0,n){
        int temp; cin>>temp;
        v[i].first = temp;
        v[i].second = i;
    }
    
    sort(v.begin(),v.end());

    int count = 1;
    rep(i,1,n){
        if(v[i].second-v[i-1].second != 1) count++;
    }
    
    if(count<=k) yes
    else no

}
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}