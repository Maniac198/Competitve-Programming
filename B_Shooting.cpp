#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
	int n; cin>>n;
    vector<pair<int,int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int temp; cin>>temp;
        v[i] = {temp,i};
    }
    
    sort(v.begin(),v.end());

    int ans = 0;
    int j = 0;
    for (int i = n-1; i >= 0; --i)
    {
       ans += v[i].first*j+1; 
       j++;
    }
    
    cout<<ans<<endl;
    for (int i = n-1; i >= 0; --i)
    {
        cout<<v[i].second+1<<" ";
    }
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}