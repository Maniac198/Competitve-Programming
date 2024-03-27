#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n;
	cin >> n;
	map<string, int> mp;
	string a[3][n];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			mp[a[i][j]]++;
		}
	}
	for (int i = 0; i < 3; i++) {
		int tot = 0;
		for (int j = 0; j < n; j++) {
			if (mp[a[i][j]] == 1) {tot += 3;}
			else if (mp[a[i][j]] == 2) {tot++;}
		}
		cout << tot << ' ';
	}
	cout << '\n';
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}