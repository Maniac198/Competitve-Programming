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
    vector<char> v;

    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (v.empty())
        {
            v.push_back(s[i]);
        }
        else if (v.back() == '(' && s[i] == ')')
        {
            v.pop_back();
        }
        else 
        {
            v.push_back(s[i]);
        }
    }

    cout<<(v.size())/2<<endl;
    
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