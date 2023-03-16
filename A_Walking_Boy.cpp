#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cur = 0;
    a.push_back(1440);
    int cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        while (a[i] - cur >= 120)
        {
            cnt++;
            cur += 120;
        }
        cur = a[i];
    }
    cout << (cnt >= 2 ? "YES" : "NO") <<endl;

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