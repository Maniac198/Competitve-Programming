#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;

void solve()
{
    int n; cin>>n;
    int v[3]={0};

    for (int i = 0; i < n; i++)
    {
        int a,b,c; cin>>a>>b>>c;
        v[0] += a;
        v[1] += b; 
        v[2] += c;
    }

    if (v[0]==0&&v[1]==0&&v[2]==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	// int t;
	// cin >> t;
	// while(t--)
	// {
	// 	solve();
	// }

    solve();
	return 0;
}