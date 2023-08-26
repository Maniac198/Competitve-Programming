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
    int n; cin>>n; 

    int sum = 0;
    rep(i,0,n){
        int tp; cin>>tp;
        sum += tp;
    }

    int x = sum % (n+1);

    vector<int> v(5);
    rep(i,0,5){
        v[i] = (x+i)%(n+1);
    }
    
    cout<<5-count(v.begin(),v.end(),0);
}
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}