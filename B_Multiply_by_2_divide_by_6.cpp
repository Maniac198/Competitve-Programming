#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
#define yes yes();
#define no no();
#define endl '\n';

void solve()
{
	int n; cin >>n;

    int twos = 0;
    int threes = 0;

    while (n%2==0)
    {
        n /= 2;
        twos++;
    }

    while (n%3==0)
    {
        n /= 3;
        threes++;
    }

    if(n==1 && twos<=threes)
    {
        cout<<2*threes-twos<<endl;
    }
    else
    {
        cout<<-1<<endl;
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