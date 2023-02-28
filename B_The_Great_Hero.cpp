#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
#define yes yes();
#define no no();
#define endl '\n';

void solve()
{
	int a,b,n;  cin>>a>>b>>n;
    vector<pair<int,int>> vp(n);
    vector<int,int> v1(n);
    vector<int,int> v2(n);

    for (auto &it : v1)
    {
        cin>>it;
    }

    for (auto &it : v2)
    {
        cin>>it;
    }
    
    for (int i = 0; i < n; i++)
    {
        vp.push_back(make_pair(v1[i],v2[i]));
    }
    sort(vp.begin(),vp.end());

    for(auto it = vp.begin(); it!=vp.end();it++) 
    {
        int p = ceil(it->second/a);
        b -= p*it->first;
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