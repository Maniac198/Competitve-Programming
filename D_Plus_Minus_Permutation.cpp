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

void solve(){
    int n,x,y; cin >> n >> x >> y;
    int intersection = n / lcm(x,y);
    x = n/x - intersection; 
    y = n/y - intersection;
    
    int p = (n*(n+1))/2; 
    int q = ((n-x)*(n-x+1))/2;
    int r = (y*(y+1))/2; 
    cout << p - q - r << endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}