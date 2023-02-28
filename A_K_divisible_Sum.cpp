#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n,k; cin>>n>>k;

    if (k == 1 || n == k)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        if (n > k)
        {
            if (n%k==0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<n/k+1<<endl;
            }
        }
        else
        {
            if (k%n==0)
            {
                cout<<k/n<<endl;
            }
            else
            {
                cout<<k/n + 1<<endl;
            }
        }
    }
}

void solve1()
{
    long long n, k;
    cin >> n >> k;
    
    long long cf = (n + k - 1) / k;
    k *= cf;
    
    cout << (k + n - 1) / n << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		solve1();
	}
	return 0;
}