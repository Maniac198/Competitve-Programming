#include <bits/stdc++.h>
using namespace std;

#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}
#define rep(i,a,b) for(int i=a;i<b;i++)
#define int long long 
#define endl '\n';
const int MOD = 1e9 + 7;
int lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve()
{
    int n; cin>>n; 
    vector<int> v(n);

    for(auto &it : v){
        cin>>it;
    }

    int m = 2*n;
    int ans = 0;
    rep(i,0,n){
        rep(aj,1,2*n+1){
            int j = v[i] * aj - i - 1;
            if (j <= i + 1)
                continue;
            if (j > n)
                break;
            if (v[j - 1] == aj)
                ans++;
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
	return 0;
}