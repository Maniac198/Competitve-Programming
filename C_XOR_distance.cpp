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
    int a,b,r; cin>>a>>b>>r; 
    long long c = a ^ b;
    int m = 0;

    // Find the leftmost set bit in c
    for (int i = 63; i >= 0; --i) {
        if ((c >> i) & 1) {
            m = i + 1;
            break;
        }
    }

    long long result = std::abs((a ^ r) - (b ^ r));

    if (m <= 63 && (r & (1LL << (m - 1)))) {
        result = std::min(result, std::abs((a ^ (r ^ ((1LL << m) - 1))) - (b ^ (r ^ ((1LL << m) - 1)))));
    }

    cout<<result<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}