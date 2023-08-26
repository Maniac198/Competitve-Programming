#include <bits/stdc++.h>
using namespace std;

#define 		yes {cout<<"YES"<<endl;}
#define 		no {cout<<"NO"<<endl;}
#define 		rep(i,a,b) for(int i=a;i<b;i++)
#define 		dep(x, a, b) for(int x = a; x >= b; -- x)
#define 		int long long 
#define 		endl '\n';
const 			int MOD = 1e9 + 7;
int 			lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve()
{
    int n; cin>>n; 
    vector<int> v(n);

    rep(i,0,n){
        cin>>v[i];
    }

    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }

    int ans = (n*(n+1))/2;
    ans -= n;

    for (auto it : mp)
    {
        if(it.second>1){
            ans -= (it.second*(it.second-1))/2;
        }
    }

    cout<<ans<<endl;
    
    
}
		
signed main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}