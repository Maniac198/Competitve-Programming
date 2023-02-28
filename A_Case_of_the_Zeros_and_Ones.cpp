#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
	int n; cin >>n;
    string s; cin >>s;

    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            c1++;
        }
        else
        {
            c2++;
        } 
    }

    cout<<n-2*min(c1,c2)<<endl;
    

}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}