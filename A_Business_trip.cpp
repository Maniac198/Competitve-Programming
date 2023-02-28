#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int k; cin>>k;
    vector<int> v(12);
    for (auto &it : v)
    {
        cin>>it;
    }
    
    sort(v.begin(),v.end(),greater<int>());

    int sum = 0;
    int count = 0;
    for (int i = 0;i < 12; i++)
    {
        if (sum < k)
        {
            sum += v[i];
            count ++;
        } 
        else
        {
            break;
        }
    }

    if (sum >= k)
    {
        cout<<count ;
    }
    else
    {
        cout <<-1;
    }
    
    
    
    
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}