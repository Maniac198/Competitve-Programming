#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
	int n,k; cin>>n>>k;
    vector<int> v(n);

    for (auto &it : v)
    {
        cin>>it;
    }

    int ans = *min_element(v.begin(),v.end())+k;

    for (int i = 0; i < n; i++)
    {
        if (abs(ans-v[i]) > k)
        {
            cout<<-1<<endl;
            return;
        }  
    }

    cout<<ans<<endl;
    
    
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