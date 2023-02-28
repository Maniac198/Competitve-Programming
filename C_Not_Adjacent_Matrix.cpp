#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n; cin>>n;

    vector<int> v1;
    vector<int> v2;

    if (n == 1)
    {
        cout<<1<<endl;
    }
    else if (n == 2)
    {
        cout<<-1<<endl;
    }
    else
    {
        int count = 0;
        for (int i = 1; i <= n*n; i++)
        {    
            if (i%2!=0)
            {
                cout<<i<<" ";
                count++;
            } 
            if (count%n==0)
            {
               cout<<endl; 
            } 
        }

        for (int i = 1; i <= n*n; i++)
        {
            if (i%2==0)
            {
                cout<<i<<" ";
                count++;
            } 
            if (count%n==0)
            {
               cout<<endl; 
            } 
        }
        
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