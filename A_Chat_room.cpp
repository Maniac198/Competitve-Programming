#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{   
    string s; cin>>s;
    string temp = "hello";

    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]==temp[j])
        {
            j++;
        }
        if (j==5)
        {
            cout<<"YES"<<endl;
            return;
        }
        
    }

    cout<<"NO"<<endl;
    
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