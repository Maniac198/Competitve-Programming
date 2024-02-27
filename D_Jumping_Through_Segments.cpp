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

struct dot{
	int l,r;
}a[200005];int n;

inline bool check(int x){
	int l=0,r=0;
	rep(i,0,n){
		if((l=max(l-x,a[i].l))>(r=min(r+x,a[i].r)))return 0;
	}
	return 1;
}

void solve(){
    cin>>n;
	rep(i,0,n){
		a[i].l=nxt();a[i].r=nxt();
	}
	int l=0,r=1e9;
	while(l<r){
		int mid=(l+r)>>1;
		if(check(mid)){
			r=mid;
		}else l=mid+1;
	}
	cout<<l<<'\n';
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}