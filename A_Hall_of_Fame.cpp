#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;

void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    for (int i = 0; i < n-1; i++)
    {
        if (s[i]=='R'&&s[i+1]=='L')
        {
            cout<<0<<endl;
            return;
        }
        else if(s[i]=='L'&&s[i+1]=='R')
        {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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