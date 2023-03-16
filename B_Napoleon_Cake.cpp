#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
ll ans[100000];

void solve()
{
    ll n; cin >>n; 

    vector<ll> v(n);

    for (auto &it : v)
    {
        cin >>it;
    }

    reverse(v.begin(),v.end());
    vector<ll> ans(n);

    ll j = 0;
    for (ll i = 0; i <n; i++)
    {
        ll temp = v[i];
        if (temp!=0)
        {
            j=i;
            while (temp--)
            {
                ans[j] = 1;
                j++;
            }
        }
    }

    reverse(ans.begin(),ans.end());
    
    for (ll i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

void solve1()
{
    ll n; cin>>n; 
    vector<ll> v(n);
    for (auto &it : v)
    {
        cin >>it;
    }

    ll s = n;

    vector<ll> ans(n);
    for (ll i = n-1; i >= 0; i--)
    {
        s = min(s,i-v[i]+1);
        if (i>=s)
        {
            ans[i] = 1;
        }
        else
        {
            ans[i] = 0;
        }
    }

    for (auto it : ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	ll t;
	cin >> t;
	while(t--)
	{
		solve1();
	}
	return 0;
}