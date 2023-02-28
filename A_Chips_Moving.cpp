#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
	int n; cin>>n;
    int c1 = 0;
    int c2 = 0;

    for (int i = 0; i < n; i++)
    {
        int temp; cin>>temp;
        if (temp%2) c1++;
        else c2++; 
    }

    cout<<min(c2,c1);
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}