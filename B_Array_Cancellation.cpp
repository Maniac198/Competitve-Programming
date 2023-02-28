#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n;
    cin >> n;
    long long cur = 0;
    for (int i = 0; i < n; ++i) {
        long long x; cin >> x;
        cur = max(0LL, cur + x);
    }
    cout << cur << "\n";
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