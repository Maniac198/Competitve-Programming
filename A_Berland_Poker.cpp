#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n,m,k; cin >>n>>m>>k;
    int d = n/k;

    if (d==k)
    {
        cout<<m<<endl;
    }
    else if (d < k)
    {
        cout<<m<<endl;
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