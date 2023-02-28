#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n,d; cin>>n>>d;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp; cin >>temp;
        sum += temp;
    }

    if (sum+10*(n-1) > d)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<(d-sum)/5;
    }
    
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
	return 0;
}