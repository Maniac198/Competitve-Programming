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
    string s; cin >>s; 
    string res = "";

    rep(i,0,s.size()){
        if(s[i]!=s[i+1]){
            res += s[i];
        }
        else{
            i++;
        }
    }

    sort(res.begin(),res.end());
    auto ip = unique(res.begin(),res.end());
    
    cout<<string(res.begin(),ip)<<endl;
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