#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve()
{
     int s, n; cin >> s >> n;
    vector<pair<int, int>> v;

    for(int i = 0; i < n; ++i)
    {
        int z, y; cin >> z >> y;
        v.push_back({z, y});
    }
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); ++i)
    {
        if(s > v[i].first)
            s += v[i].second;
        else
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";

}
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}