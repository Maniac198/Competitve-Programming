#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
	int n,k; cin>>n>>k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int t1,t2; cin>>t1>>t2;
        if (t2>k)
        {
            v.push_back(t1+k-t2);
        }
        else
        {
            v.push_back(t1);
        }
    }

    cout<<*max_element(v.begin(),v.end());
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}