#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;

void solve()
{
    ll n; cin>>n;
    ll p = n/2;
    ll ans = 8*((p*(p+1))/2);

    ll ans2 = (((p-1)*p*(p+1))/3)*8;

    cout<<ans+ans2<<endl;
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}