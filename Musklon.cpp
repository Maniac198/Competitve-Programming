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
    int n,k; cin>>n>>k; 
    int sum = 0;

    int count = 0;

    int a[n];
    rep(i,0,n){ 
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        k -= (5000-temp);
        count ++;
        if(k<=0){
            cout<<count<<endl;
            return;
        }
    }

    cout<<-1<<endl;

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