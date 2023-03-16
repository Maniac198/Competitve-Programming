#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;

void solve()
{
    ll a,b,c; cin>>a>>b>>c;

    a = (a+c-1)/c;

    b = (b+c-1)/c;

    cout<<1LL*a*b<<endl;    

}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}