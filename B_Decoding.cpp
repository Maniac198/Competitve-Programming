#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
	int n; cin>>n;
    string s; cin >>s;
    list<char> ls;
    ls.push_front(s[0]);
    for (int i = 1; i < n; i++)
    {
        if (i%2==0)
        {
            ls.push_front(s[i]);
        }
        else 
        {
            ls.push_back(s[i]);
        }
        
    }

    if (n%2==0)
    {
        for (auto it : ls)
        {
            cout<<it;
        }
    }
    else 
    {
        reverse(ls.begin(),ls.end());
        for (auto it : ls)
        {
            cout<<it;
        }   
    }
 
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}