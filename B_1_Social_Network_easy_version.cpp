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
int          arr[100000];

void solve()
{
    int n,k; cin>>n>>k;
    deque<int> dq;
    set<int> ondq;

    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= n; i++)
    {
        if (ondq.count(arr[i])) continue;
        dq.push_front(arr[i]);
        ondq.insert(arr[i]);
        if (dq.size() > k)
        {
            ondq.erase(dq.back());
            dq.pop_back();
        }
    }
    cout << dq.size() << '\n';
    for (int x : dq) cout << x << " ";
}
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}