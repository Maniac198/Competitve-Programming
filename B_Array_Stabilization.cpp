#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define endl '\n';

int main()
{
	// ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);

    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }

    sort(arr,arr+n);
    
    cout<<min(arr[n-2]-arr[0],arr[n-1]-arr[1])<<endl;
	return 0;
}