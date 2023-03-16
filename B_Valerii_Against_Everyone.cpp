#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;

void solve()
{
    int n; cin>>n;
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        int t; cin>>t;
        mp[t]++;
    }

    for (auto it : mp)
    {
        if (it.second >= 2)
        {
            cout<<"YES"<<endl;
            return;
        }
        
    }
    cout<<"NO"<<endl; 
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