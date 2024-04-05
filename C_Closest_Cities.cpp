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
const int N = 200'000;
const int INF = 1'000'000'009;
char type(const vector <int>& a, int id) {
    int distL = (id == 0? INF : a[id] - a[id - 1]);
    int distR = (id + 1 == a.size()? INF : a[id + 1] - a[id]);
    if(distL < distR) return 'L';
    if(distL > distR) return 'R';
    assert(false);
}

void solve(){
    int n; cin >> n; 
    vector<int> a(n);
    rep(i,0,n) cin >> a[i];

    vector <int> l(n), r(n);
    for (int i = 1; i < n; ++i)
        r[i] = r[i - 1] + (type(a, i - 1) == 'R'? 1 : a[i] - a[i - 1]);
    for (int i = n - 2; i >= 0; --i)
        l[i] = l[i + 1] + (type(a, i + 1) == 'L'? 1 : a[i + 1] - a[i]);
    
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        if (x < y){
            cout << r[y] - r[x] << endl;
        } 
        else{
            cout << l[y] - l[x] << endl;
        }
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