#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
#define yes yes();
#define no no();
#define endl '\n';

void solve()
{
    int m,n; cin>>m>>n;
    string a,b; cin>>a>>b;

    string ab = a;
    reverse(b.begin(),b.end());
    ab += b;
    
    int count = 0;
    for (int i = 1; i < ab.size(); i++)
    {
        if(ab[i]==ab[i-1])
        {
            count ++;
        }
        if(ab[i]==ab[i-1] && ab[i]==ab[i+1] && i>1 && i<ab.size()-1) 
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    if (count > 1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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