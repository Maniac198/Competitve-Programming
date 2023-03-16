#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    ll a,b; cin>>a>>b;

    // if (a%3 == 0)
    // {
    //     cout<<b*(a/3)<<endl;
    // }
    // else if (b%3 == 0)
    // {
    //     cout<<a*(b/3)<<endl;
    // }
    // else
    // {
    //     int m = max(a,b);
    //     int mn = min(a,b);

    //     if (m%3 == 2)
    //     {
    //         cout<<mn*(m/3)+mn<<endl;
    //     }
    //     else
    //     {
    //         if (mn%3 == 2)
    //         {
    //             cout<<(m/3)*mn+(mn/3)+1<<endl;
    //         }
    //         else
    //         {
    //             cout<<(m/3)*mn+(mn/2)<<endl;
    //         }
            
    //     }
        
    // }

    int64_t x = a*b;
    cout<< (x+2)/3<<endl;
    
    
    
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