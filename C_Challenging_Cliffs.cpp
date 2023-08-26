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
    for (auto &it : v){
        cin>>it;
    }

    sort(v.begin(),v.end());

    if(n==2){
        cout<<v[0]<<" "<<v[1]<<endl;
        return;
    }
    
    int min = INT_MAX;
    int index;
    rep(i,0,n-1){
        if(abs(v[i]-v[i+1]) <= min){
            index = i;
            min = abs(v[i]-v[i+1]);
        }
    }   

    rep(i,index+1,n){
        cout<<v[i]<<" ";
    }

    rep(i,0,index+1){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    
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