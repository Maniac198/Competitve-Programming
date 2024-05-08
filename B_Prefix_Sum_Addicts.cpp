#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      ll long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n, k;
	cin >> n >> k;
	vector<long long> s(n + 1);
	for (int i = n - k + 1; i <= n; ++i)
		cin >> s[i];
	if (k == 1)
	{
		cout << "YES" << endl;
		return;
	}
	vector<long long> a(n + 1);
	for (int i = n - k + 2; i <= n; ++i)
		a[i] = s[i] - s[i - 1];
	if (!std::is_sorted(a.begin() + n - k + 2, a.end()))
	{
		cout << "NO" << endl;
		return;
	}
	if (s[n - k + 1] > a[n - k + 2] * (n - k + 1))
	{
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}