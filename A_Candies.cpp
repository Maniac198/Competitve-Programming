#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n; cin>>n;

    int val;
    for (int pw = 2; pw < 30; ++pw) 
    {
        val = (1 << pw) - 1;

        if (n % val == 0) {
            break;
        }
    }

    cout <<n/val<<endl;
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