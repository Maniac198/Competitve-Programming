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

void solve()
{
    int n; cin>> n; 

    int b[n+2];
    int sum = 0;
    rep(i,0,n+2){
        cin>>b[i];
        sum+= b[i];
    }
    sort(b,b+n+2);
    sum -= (b[n]+b[n+1]);
    if (sum > b[n] && sum > b[n + 1]) {
        cout << -1 << "\n";
        return;
    }
    if (sum == b[n] || sum == b[n + 1]) {
        for (int j = 0;j < n;j++) {
            cout << b[j] << " ";
        }
        cout << "\n";
        return;
    }
    int i;
    for (i = 0; i < n; i++) {
        int temp = sum - b[i];
        if (temp + b[n] == b[n + 1]) {
            b[i] = b[n];
            break;
        }
    }
    if (i == n) {
        cout << -1 << "\n";
    }
    else {
        for (int j = 0;j < n;j++) {
            cout << b[j] << " ";
        }
        cout << "\n";
    }

}
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}