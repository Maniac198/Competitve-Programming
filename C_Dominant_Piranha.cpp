#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll arr,ll b) { return arr/gcd(arr,b)*b; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
#define yes yes();
#define no no();
#define endl '\n';

void solve()
{
	int n; cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
       cin>>arr[i]; 
    }

    int maxi = *max_element(arr,arr+n);
    int idx = -1;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != maxi) continue;
        if (i > 0 && arr[i - 1] != maxi) idx = i + 1;
        if (i < n - 1 && arr[i + 1] != maxi) idx = i + 1;
    }

    cout<<idx<<endl;
    
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