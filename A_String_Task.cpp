#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;
int isVowel(char ch)
{
    // Make the list of vowels
    string str = "aeiouyAEIOUY";
    return (str.find(ch) != string::npos);
}
void solve()
{
    string s; cin >>s; 
    string ans,a;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++)
    {
        char tp = s[i];
        if (!isVowel(tp))
        {
            ans.push_back(tp);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        a.push_back('.');
        a.push_back(ans[i]);
    }
    
    cout<<a<<endl;
    
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