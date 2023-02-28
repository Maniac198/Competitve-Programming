#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int c[3]; for (int i = 0; i < 3; i++)
    {
        cin >>c[i];
    }

    int a[5]; for (int i = 0; i < 5; i++)
    {
        cin >>a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (a[i]>c[i])
        {
            cout<<"NO"<<endl;
            return;
        } 
    }

    for (int i = 0; i < 3; i++)
    {
        c[i] -= a[i];
        a[i] = 0;
    }

    if (c[0]<a[3])
    {
        a[3] -= c[0];
    }
    else
    {
        a[3] = 0;
    }

    if (c[1]<a[4])
    {
        a[4] -= c[1];
    }
    else
    {
        a[4] = 0;
    }

    if (c[2] >= (a[3]+a[4]))
    {
        a[3] = 0;
        a[4] = 0;
    }

    for (int i = 0; i < 5; i++)
    {
        if (a[i]>0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
       
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