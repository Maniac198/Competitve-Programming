#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int a; cin>>a;
    string s; cin >>s;
    unordered_map<string,int> mp;

    for (int i = 0; i < a-1; i++)
    {
        string temp = s.substr(i,2);
        mp[temp]++;
    }

    int mx = INT_MIN;
    string ans;
    for (auto it : mp)
    {
        if (it.second >= mx)
        {
            mx = it.second;
            ans = it.first;
        }
    }

    cout<<ans;
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}