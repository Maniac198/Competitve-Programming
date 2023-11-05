#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vb v.begin()
#define      ve v.end()
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

double dist(int a, int b, int c, int d){
    return sqrt((a-c)*(a-c)+(b-d)*(b-d)); 
}

void solve(){
    int a,b,c,d,e,f; 
    cin>>a>>b>>c>>d>>e>>f; 

    double l1 = max(dist(c,d,0,0),dist(c,d,a,b));
    double l2 = max(dist(e,f,0,0),dist(e,f,a,b));

    double both = max({min(dist(a,b,c,d),dist(a,b,e,f)),min(dist(0,0,c,d),dist(0,0,e,f)),dist(c,d,e,f)/2});

    double ans = min({l1,l2,both}); 

    cout<<setprecision(12)<<ans<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}