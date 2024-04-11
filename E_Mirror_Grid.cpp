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
    vector<string> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int res = 0; 
    for(int i = 0; i < (n+1)/2; i++){
        for(int j = 0; j < n/2; j++){
            int ones = 0, zeroes = 0;

            if( a[i][j] == '1') ones++;
            else zeroes++;

            if( a[j][n-i-1] == '1') ones++;
            else zeroes++;

            if( a[n-i-1][n-j-1] == '1') ones++;
            else zeroes++;

            if( a[n-j-1][i] == '1') ones++;
            else zeroes++;

            res += min(ones,zeroes);
        }
    }

    cout << res << endl;
}   
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}