#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >>it;
    }

    sort(v.begin(),v.end());
    int s1 = 0;
    int s2 = 0;

    for (int i = 0; i < n/2; i++)
    {
        s1 += v[i];
    }

    for (int i = n/2; i < n; i++)
    {
        s2 += v[i];
    }

    cout<<s1*(long long)s1+s2*(long long)s2<<endl;
     
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}