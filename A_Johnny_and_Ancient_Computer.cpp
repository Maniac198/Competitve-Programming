#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i=a;i<b;i++)
#define      dep(x,a,b) for(int x = a; x >= b; -- x)
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

int real(int a){
    while(a%2==0){
        a/=2;
    }
    return a;
}
void solve()
{
    int a,b; cin >>a>>b;

    if(a>b) swap(a,b);

    if(real(a)!=real(b)){
        cout<<-1<<endl;
        return;
    }

    b /= a;

    int count = 0;

    while(b>=8){
        b/=8;
        count++;
    }

    if(b>1) count++;
    cout<<count<<endl;
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