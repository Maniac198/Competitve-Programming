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
    vector<int> v(n),pref(n+1); 
    rep(i,0,n) cin >> v[i];

    pref[1] = v[0];
    rep(i,2,n+1) pref[i] = pref[i-1] + v[i-1];

    double answer = 0; 
    for(int i = k; i <= n; i++){
        for(int j = 0; j < n; j++){
            if( j+i > n ) break;
            else{   
                int sum = pref[j+i] - pref[j];
                answer = max(answer,(double) sum/i );
            }
        }
    }

    cout << setprecision(10);
    cout << answer << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}