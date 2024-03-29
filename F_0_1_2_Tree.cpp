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
    int a,b,c; cin >> a >> b >> c; 

    if( a+1 != c ){
        cout << -1 << endl; return;
    }
    
    if(a + b + c == 1) {
        cout << 0 << endl; return;
    }

    int curr = 1, next = 0, res = 1;
	for (int i = 0; i < a + b; i++) {
		if (!curr) {
	        swap(next, curr);
	        res++;
	    }
	    curr--;
	    next++;
	    if (i < a) {next++;}
	}

	cout << res << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}