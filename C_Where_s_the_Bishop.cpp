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

bool check(int r,int c,vector<vector<char>> &a){
    if(a[r-1][c-1] != '#') return false;
    if(a[r-1][c+1] != '#') return false;
    if(a[r+1][c-1] != '#') return false;
    if(a[r+1][c+1] != '#') return false;

    return true;
}
void solve(){
    vector<vector<char>> a(8,vector<char>(8));
    rep(i,0,8){
        rep(j,0,8){
            cin >> a[i][j];
        }
    }

    rep(i,1,7){
        rep(j,1,7){
            if( a[i][j] == '#' and check(i,j,a) ){
                cout << i+1 << " " << j+1 << endl;
            }
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