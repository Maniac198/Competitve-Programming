#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    ll a,b,c,d; 
    cin>>a>>b>>c>>d; 

    if (b >= a)
    {
        cout<<b<<endl;
    }
    else if(c<=d)
    {
        cout<<-1<<endl;
    }
    else
    {
        int m = a-b;
        int n = c-d; 
        cout<<b+(m/n + (m%n>0))*c<<endl;
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