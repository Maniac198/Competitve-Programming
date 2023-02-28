#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
	string a,b; cin>>a>>b;

    int n = a.length()+b.length();

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    
    for (int i = 0; i < min(a.length(),b.length()); i++)
    {
        if (a[i]==b[i])
        {
            n -= 2;
        }
        else
        {
            break;
        }
    }

    cout<<n<<endl;
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}