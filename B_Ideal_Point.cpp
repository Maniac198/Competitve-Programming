#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
	int n,k; cin>>n>>k;
    
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++)
    {
        int a,b;cin>>a>>b;
        if (k == a)
        {
            start++;
        }
        if (k == b)
        {
            end++;
        }
        
    }

    if (start > 0 && end > 0)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl; 
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