#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    string s; cin>>s;

	vector<string> a = {"00", "25", "50", "75"};
    int mn = INT_MAX;
    for (int i = 0; i < 4; ++i) {
        int q = 1;
        int now = 0;
        for (int j = s.size() - 1; j >= 0; --j) {
            if (q >= 0 && s[j] == a[i][q]) {
                --q;
            } else {
                if (q >= 0) {
                    ++now;
                }
            }
        }
        mn = min(mn, now);
    }
    cout << mn <<endl;
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