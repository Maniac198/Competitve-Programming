#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n,m; cin>>n>>m;
    vector<int> v(m);
    for (auto &it : v)
    {
        cin>>it;
    }
    
    // auto ip = unique(v.begin(),v.begin()+m);
    // v.resize(std::distance(v.begin(), ip));

    // sort(v.begin(),v.end());
    
    ll ans = v[0]-1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i]>=v[i-1])
        {
            ans += v[i]-v[i-1];
        }
        else
        {
            ans += n-v[i-1]+v[i];
        }
        
    }
    cout<<ans<<endl;
    
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	// int t;
	// cin >> t;
	// while(t--)
	// {
	// 	solve();
	// }
    solve();
	return 0;
}