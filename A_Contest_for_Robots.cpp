#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n; cin >>n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            c1++;
        }
        else if(a[i] < b[i])
        {
            c2++;
        }
        
    }

    if (c1==0)
    {
        cout<<-1;
        return;
    }
    cout<<(c2/c1)+1<<endl;   
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
	return 0;
}