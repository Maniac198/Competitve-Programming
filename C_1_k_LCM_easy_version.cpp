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
    int n,k; cin>>n>>k;

    if(n&1){
        cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
    }
    else{
        if((n/2)%2==0){
            cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
        }
        else{
            cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
        }
    }
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