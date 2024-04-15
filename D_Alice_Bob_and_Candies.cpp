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
    vector<int> v(n); 
    rep(i,0,n) cin >> v[i];
    
    int i = 0, j = n-1;
    int sl = 0, sr = 0, psl = 0, psr = 0;
    int moves = 0;
    int a = 0, b = 0;

    while( i <= j ){
        if(moves % 2 == 0){
            while( i <= j and sl <= psr ){
                sl += v[i];
                i++;
            }
            a += sl;
            psl = sl;
            sl = 0;
            moves++;
        }
        else{
            while( i <= j and sr <= psl ){
                sr += v[j]; 
                j--;
            }
            b += sr;
            psr = sr;
            sr = 0;
            moves++;
        }
    }

    cout << moves << " "  << a << " " << b << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}