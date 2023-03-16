#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;

void solve()
{
    int a,b; cin>>a>>b;

    a = abs(a);
    b = abs(b);

    if (a == b)
    {
        cout<<a+b<<endl;
        return;
    }
    else if (a == b+1 || b == a+1 )
    {
        cout<<a+b<<endl;
        return;
    }
    else
    {
        cout<<2*max(a,b)-1<<endl;
        return;
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