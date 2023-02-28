#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    char ch; cin >>ch;
    string s; cin >>s;

    unordered_map<char,char> mp;

    string q = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if (ch == 'R')
    {
        for (int i = 1; i < q.length(); i++)
        {
            char temp = q[i];
            mp[temp] = q[i-1];
        }
    }
    else if(ch == 'L')
    {
        for (int i = 0; i < q.length()-1; i++)
        {
            char temp = q[i];
            mp[temp] = q[i+1];
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        cout<<mp[s[i]];
    } 
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}