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
    int n, k; cin >> n >> k; 
    vector<int> v(n); 
    map<int,int> mp;
    rep(i,0,n){
        cin >> v[i];
        mp[v[i]]++;
    }

    vector<int> poss;
    for(auto it : mp){
        if(it.second >= k) poss.push_back(it.first);
    }

    if(poss.size() == 0){
        cout << -1 << endl;
        return;
    }

    int l = 0, r = poss[0];
	int curr = 1, mx = INT_MIN;
 
	rep(i, 1, poss.size()) {
		if (poss[i] == poss[i - 1] + 1) {
			curr++;
		} 
        else {
			if (mx < curr) {
				mx = max(mx, curr);
				r = poss[i - 1];
			}
			curr = 1;
		}
	}
	if (curr > 0) {
		if (mx < curr) {
			mx = max(mx, curr);
			r = poss[poss.size() - 1];
		}
	}
 
	if (mx == INT_MIN) {
		cout << -1 << endl; return;
	}
 
	cout << r - mx + 1 << " " << r << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}