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
    int n; cin >> n;
    int a[n];
    set <pair <int, int>> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert({-a[i], i});
    }

    vector <pair <int, int>> sol;
    bool ok = true;
    while (-s.begin()->first != -s.rbegin()->first) {
        int i = s.begin()->second;
        int j = s.upper_bound({-a[i], INT_MAX})->second;
        if (a[j] == 1) {
            ok = false;
            break;
        }
        sol.push_back({i + 1, j + 1});
        s.erase(s.begin());
        a[i] = (a[i] + a[j] - 1) / a[j];
        s.insert(make_pair(-a[i], i));
    }

    if (ok) {
        cout << (int) sol.size() << endl;
        for (pair <int, int> op : sol) {
            cout << op.first << " " << op.second << endl;
        }
    } 
    else {
        cout << -1 << endl;
    }
}   
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}