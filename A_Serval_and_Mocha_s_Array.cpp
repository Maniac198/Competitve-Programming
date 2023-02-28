#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    ll n; cin>>n;
    vector<ll> v(n);
    for (auto &it : v)
    {
        cin>>it;
    }


    sort(v.begin(),v.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    ll q = v[0];
    
    for (int i = 1; i < n; i++)
    {
        q = __gcd(q,v[i]);
        
        if (q>i+1)
        {
            cout<<"No"<<endl;
            return;
        }
    }

    cout<<"Yes"<<endl; 
}

void solve3()
{
    ll n; cin>>n;
    vector<ll> v(n);
    for (auto &it : v)
    {
        cin>>it;
    }

    ll mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            mn = min(mn,__gcd(v[i],v[j]));
        }
    }

    if (mn<=2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
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
		solve3();
	}
	return 0;
}