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

    if( m == 1 ){
        cout << 0 << endl;
    }
    else if( n > m-1 ){
        cout << m << endl;
    }
    else{
        cout << n+1 << endl;
    }

    for(int i = 0; i < min( m-1, n ); i++){
        for(int j = 0; j < m; j++){
            cout << (i+j) % m << " ";
        }
        cout << endl;
    }

    if( n > m-1 ){
        for(int i = m-1; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << j << " ";
            }
            cout << endl;
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