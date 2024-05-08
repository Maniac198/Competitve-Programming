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

pair<int,int> ne(int h, int m, int x){
	m += x;
	h += m/60;
	h %= 24;
	m %= 60;
	return {h,m};
}
void solve(){
	int h = 0,m = 0,x;
	char c; cin >> c;
	h = 10*(c-'0');
	cin >> c;
	h += c-'0';
	cin >> c >> c;
	m = 10*(c-'0');
	cin >> c;
	m += c-'0';
	cin >> x;
	set<pair<int,int>> s;
	for (int i = 0;i < 1445;i++){
		if (h%10 == m/10 && h/10 == m%10) s.insert({h,m});
		auto t = ne(h,m,x);
		h = t.first;
		m = t.second;
	}
	cout << s.size() << '\n';
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}