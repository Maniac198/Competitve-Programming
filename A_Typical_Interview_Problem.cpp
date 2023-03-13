#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n; cin >>n;
    string s; cin >>s;
    string ans = "";
    // string ans="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFF";
    for (int i = 1; i < 10000; i++) 
    {
        if (i % 3 == 0) ans += 'F';
        if (i % 5 == 0) ans += 'B';
    }
    bool a = false;
    for (int i = 0; i < ans.length() - n; i++) 
    {
        if (ans.substr(i, n) == s) 
        {
            a = true;
            break;
        }
    }
    if (a)
    {
        cout << "YES"<<endl;
    }
    else 
    {
        cout << "NO"<<endl;
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