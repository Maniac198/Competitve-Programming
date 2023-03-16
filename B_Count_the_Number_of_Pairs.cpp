#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n,k;
    string s; cin>>n>>k>>s;

    map<char,int> mp; 
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n; i++)
    {
        char temp = s[i];
        mp[temp]++;
        if (isupper(temp))
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    
    int count = 0;
    string tp = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 26 && k > 0; i++)
    {
        char ch = tp[i];
        char ch2 = toupper(ch);
        if (s.find(ch) && s.find(ch2))
        {
            count += min(mp[ch],mp[ch2]);
        }
    }

    cout<<count <<endl;
    cout <<endl;
    
}

void solve2()
{
    int n,k;
    string s; cin>>n>>k>>s;

    map<pair<char, char>, pair<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (islower(ch))
        {
            mp[{ch,toupper(ch)}].first++;
        }
        else
        {
            mp[{tolower(ch), s[i]}].second++;
        }
    }

    int ans = 0;
    for (auto i : mp)
    {
        int c = min(i.second.first, i.second.second);
        ans += c;
        i.second.first -= c;
        i.second.second -= c;
        int take = max(i.second.first, i.second.second);
        int x = min(take / 2, k);
        ans += x;
        k -= x;
    }
    
    cout<<ans<<endl;
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		solve2();
	}
	return 0;
}