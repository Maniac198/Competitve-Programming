#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
	int n; cin>>n;
    vector<int> v(n);
    int index = 0;
    for (auto &it : v)
    {
        cin >>it;
    }

    auto it = min_element(v.begin(),v.end());
    int indx = distance(v.begin(),it);

    int ct = count(v.begin(),v.end(),*it);

    if(ct>1) 
    {
        cout<<"Still Rozdil"<<endl;
    }
    else 
    {
        cout<<indx+1<<endl;
    }
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}