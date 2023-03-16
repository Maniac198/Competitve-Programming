#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n,m,k; cin >>n>>m>>k;
    int d = n/k;

    if (m<=d)
    {
        cout<<m<<endl;
    }
    else
    {
        if (k-1 >= m-d)
        {
            cout<<d-1<<endl;
        }
        else
        {
            if ((m-d)%(k-1)==0)
            {
                cout<<d-(m-d)/(k-1)<<endl;
            }
            else
            {
                cout<<d-1-(m-d)/(k-1)<<endl;
            }
            
        }
        
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