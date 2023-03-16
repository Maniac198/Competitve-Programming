#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;

void solve()
{
    ll n; cin>>n;
    cout<<2<<endl;

    cout<<n<<" "<<n-1<<endl;
    for (int i = n,j=n-2; j > 0; i--,j--)
    {
        cout<<j<<" "<<i<<endl;
    }
    
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