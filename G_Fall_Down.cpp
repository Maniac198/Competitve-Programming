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
    int n,m; cin >> n >> m; 
    vector<vector<char>> v(n,vector<char>(m));
    rep(i,0,n){
        rep(j,0,m) cin >> v[i][j];
    }

    rep(j,0,m){
        int last = n-1;
        rep(i,n,0){
            if( v[i][j] == 'o' ) last = i-1;
            else if( v[i][j] == '*' ){
                swap(v[i][j],v[last][j]);
                last --;
            }
        }
    }

    rep(i,0,n){
        rep(j,0,m) cout << v[i][j];
        cout << endl;
    }
    cout << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}