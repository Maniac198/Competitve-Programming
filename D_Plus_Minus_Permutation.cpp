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

long long max_permutation_score(long long n, long long x, long long y) {
    long long lcm = (x * y) / __gcd(x, y);
    long long divisible_by_both = (n / lcm) * (lcm * (lcm + 1) / 2);
    long long divisible_by_x_not_y = ((n / x) - (n / lcm)) * (x * (x + 1) / 2);
    long long divisible_by_y_not_x = ((n / y) - (n / lcm)) * (y * (y + 1) / 2);
    long long neither_divisible = n - (n / x + n / y - (n / lcm));
    long long score = divisible_by_both - divisible_by_x_not_y - divisible_by_y_not_x + neither_divisible;
    return score;
}

void solve(){
    int n,x,y;
    cin >>n>>x>>y;

    cout<<max_permutation_score(n,x,y)<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}