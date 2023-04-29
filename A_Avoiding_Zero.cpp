#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;

void solve()
{
    int n; cin>>n;

	int sp = 0;
	int sn = 0;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin>>it;  
		if (it < 0)
		{
			sn += it;
		}
		else if (it > 0)
		{
			sp += it;
		}
    }

	int sum = accumulate(v.begin(),v.end(),0);

	if (sum == 0)
	{
		cout<<"NO"<<endl;
		return;
	}
	else if (sum < 0)
	{	
		sort(v.begin(),v.end());
	}
	else
	{
		sort(v.rbegin(),v.rend());
	}
	cout<<"YES"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
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