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
    vector<string> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];
    string ans = "DRAW";
    for(int i = 0; i < 3; i++) {
        if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != '.')
            ans=v[i][0];
    }
    for (int i = 0; i < 3; i++) {
        if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] != '.')
            ans=v[0][i];
    }
    if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != '.')
        ans=v[0][0];
    if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[0][2] != '.')
        ans=v[0][2];
    cout << ans << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}