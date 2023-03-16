#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;

void solve()
{
    ll x,y,a,b; cin>>x>>y>>a>>b;
    ll ans = 0;

    if (x>=0 && y>=0)
    {
        ans = min(x,y)*b + abs(x-y)*a;
        ans = min(ans,(x+y)*a);
    }
    else if (x<0&&y<0)
    {
        ans = max(x,y)*b + abs(x-y)*a;
        ans = min(ans,(abs(x+y)*a));
    }
    else if (x >=0 && y<0)
    {
        ans = (x + abs(y))*a;
    }
    else if (x < 0 && y>=0)
    {
        ans = (abs(x) + y)*a;
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