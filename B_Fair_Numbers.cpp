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

bool is_fair(int n){
    int a = n;
    while (a>0)
    {
        int rm = a%10;
        a /= 10;
        if(rm!=0 && n%rm != 0) return false;
    }

    return true;
}

void solve()
{
    int n; cin>>n; 
    while(is_fair(n) == false){
        n++;
    }

    cout<<n<<endl;
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