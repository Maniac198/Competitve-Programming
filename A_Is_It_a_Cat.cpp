#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n; cin>>n;
    string s; cin>>s; 

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    auto it = unique(s.begin(),s.end());
    
    string temp = string(s.begin(),it);
    
    if (temp == "meow")
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

	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}