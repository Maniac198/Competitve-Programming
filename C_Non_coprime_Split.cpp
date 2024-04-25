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

int minFactor(int num){
    if( num <= 1 ) return 1;

    for( int i = 2; i * i <= num; i++){
        if( num % i == 0 ) return i;
    }

    return true;
}

void solve(){
    int l,r; cin >> l >> r; 

    rep(i,l,r+1){
        if( i%2 == 0 ){
            if( i/2 != 1 ){
                cout << i/2 << " " << i/2 << endl; 
                return;
            }
        }
        else{
            int mn = minFactor(i);
            if( mn != 1 ){
                cout << mn * ( i/mn - 1 ) << " " << mn << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}