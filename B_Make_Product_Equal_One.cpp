#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n; cin >>n;
    int a[n];
    int count = 0;
    int zero = 0;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];

        if(a[i]<0)
        {
            count++;
        }
        else if(a[i] == 0)
        {
            zero ++;
        }

        // if (a[i]<0 && mn < a[i])
        // {
        //     mn = a[i];
        // }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0)
        {
            ans++;
        }
        else
        {
            ans += abs(a[i]) - 1;
        }
    }
    
    if (count%2!=0 && zero==0)
    {
        ans += 2;
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