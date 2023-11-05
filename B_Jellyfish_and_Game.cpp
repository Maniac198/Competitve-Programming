#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define dep(x, a, b) for (int x = a; x >= b; --x)
#define vb v.begin()
#define ve v.end()
#define int long long
#define endl '\n';
const int MOD = 1e9 + 7;
int lcm(int a, int b) { return a / __gcd(a, b) * b; }

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> j(n), g(m);

    for (int i = 0; i < n; i++)
    {
        cin >> j[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> g[i];
    }

    int mna = 1e9, mxa = 0, sma = 0;
    int mnb = 1e9, mxb = 0, smb = 0;

    for (int i : j)
    {
        mna = min(i, mna);
        mxa = max(i, mxa);
        sma += i;
    }

    for (int i : g)
    {
        mnb = min(i, mnb);
        mxb = max(i, mxb);
        smb += i;
    }

    int final;

    if (k == 1)
    {
        if (mxb > mna)
        {
            final = sma - mna + mxb;
        }
        else
        {
            final = sma;
        }
    }
    else if (k == 2)
    {
        int newmx = max(mxb, mxa);
        int newmn = min(mna, mnb);

        if (mxb > mna)
        {
            sma = sma - mna + mxb;
        }

        sma = sma - newmx + newmn;
        final = sma;
    }
    else if (k >= 3)
    {
        int mx = max(mxa, mxb);
        int mn = min(mna, mnb);

        if (mxb > mna)
        {
            final = sma - mna + mxb;
        }
        else
        {
            final = sma;
        }

        if (k % 2)
        {
            final = final - mx + mn;
            final = final - mn + mx;
        }
        else
        {
            final = final - mx + mn;
        }
    }

    cout << final << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}