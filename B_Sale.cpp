#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n,m; cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    int sum = 0;
    int i = 0;
    while (a[i]<=0 && m)
    {
        sum += abs(a[i]);
        m--;
        i++;
    }

    cout<<sum;
    
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}