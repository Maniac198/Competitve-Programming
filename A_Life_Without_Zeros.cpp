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
    int a,b; cin>>a>>b;
    int c = a+b;
    string d = to_string(a),e=to_string(b),f=to_string(c);

    d.erase(remove(d.begin(), d.end(),'0'), d.end());
    e.erase(remove(e.begin(), e.end(),'0'), e.end());
    f.erase(remove(f.begin(), f.end(),'0'), f.end());

    a = stoi(d);
    b = stoi(e);
    c = stoi(f);

    if(a+b == c){
        yes
    }
    else{
        no
    }
}
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}