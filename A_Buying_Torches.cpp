#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    ll x,y,k; cin >>x>>y>>k;

    int64_t p = (y+1)*k - 1;
    int64_t ans;
    if (p%(x-1)==0)
    {
        ans = p/(x-1) + k;
    }
    else
    {
        ans = p/(x-1) + k+1;
    }
    
    cout<<ans<<endl;
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