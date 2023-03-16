#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    ll a,b,c; cin>>a>>b>>c;

    if (c>=b)
    {
        cout<< (a-c)/b + ((a-c)%b>0)<<endl;
    }
    else
    {
        cout<<a/b+ (a%b>0)<<endl;
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