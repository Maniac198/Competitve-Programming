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
    int n,k; cin >> n >> k; 
    vector<int> a(n);
    rep(i,0,n) cin >> a[i];

    sort(all(a));
    int ans;
	
	if (k == 0) {
		ans = a[0] - 1;
	} else {
		ans = a[k - 1];
	}
	
	int cnt = 0;
	
	for (int i = 0; i < n; ++i)
		if (a[i] <= ans) ++cnt;
	
	if (cnt != k || !(1 <= ans && ans <= 1e9)) {
		cout << -1 << endl;
		return;
	}
	
	cout << ans << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}