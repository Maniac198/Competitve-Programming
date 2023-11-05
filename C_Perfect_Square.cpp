#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vb v.begin()
#define      ve v.end()
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

string A[1001];
void solve(){
    int n; cin>>n; 
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }

    int ans = 0;
    for(int i = 0; i<n/2 ;i++){
        for(int j = 0; j<n/2; j++){
            vector<char> v = {A[i][j], A[n - 1 - j][i], A[n - 1 - i][n - 1 - j], A[j][n - 1 - i]};
            char c = *max_element(v.begin(),v.end());
            for(auto e : v){
                ans += c-e; 
            }
        }
    }

    cout<<ans<<endl; 
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}