#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n,a,b; cin>>n>>a>>b;
    string s; cin >>s;
    if (b>=0)
    {
        cout<<n*(a+b)<<endl;
    }
    else
    {
        int m = unique(s.begin(), s.end()) - s.begin();
        cout<<n*a+(m/2+1)*b<<endl;
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