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
    int n,k; cin >> n >> k; 

    if( n < k ){
        no; return;
    }
    
    if(n%2==1 and k%2==0){
        no; return;
    }

    if( n%2 == 0 and k%2 == 0 ){
        if(n%k==0){
            yes; rep(i,0,k) cout << n/k << " ";
            cout << endl;
        }
        else{
            yes;
            cout << n/k + n%k << " ";
            rep(i,0,k-1) cout << n/k << " ";
            cout << endl;
        }
    }
    else if( n%2 == 0  and k%2 != 0 ){
        if( n%k == 0 ){
            yes; rep(i,0,k) cout << n/k << " ";
            cout << endl;
        }
        else{
            if( (n-k+1)&1 ){
                yes;
                cout << n-k+1 << " ";
                rep(i,0,k-1) cout << 1 << " ";
                cout << endl;
            }
            else{
                if( n/2+1 > k ){
                    yes;
                    cout << n-2*(k-1) << " ";
                    rep(i,0,k-1) cout << 2 << " ";
                    cout << endl;
                }
                else{
                    no; return;
                }
            }
        }
    }
    else if( n%2 != 0  and k%2 != 0 ){
        yes;
        cout << 1 + n-k << " ";
        rep(i,0,k-1) cout << 1 << " ";
        cout << endl;
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