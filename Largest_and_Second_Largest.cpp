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
    set<int> v;
    rep(i,0,n){
        int tp; cin>>tp;
        v.insert(tp);
    }

    int a = 2;
    int sum = 0;
    for(auto it = v.rbegin(); it!=v.rend();it++){
        a--;
        sum += *it;
        if(a==0){
            break;
        }
    }
    
    cout<<sum<<endl;
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