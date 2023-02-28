#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int a[2],b[2];
    for (int i = 0; i < 2; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < 2; i++)
    {
        cin>>b[i];
    }

    if (min(a[1],a[0])+min(b[0],b[1]) != max(a[0],a[1]) || max(a[0],a[1]) != max(b[0],b[1]))
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
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