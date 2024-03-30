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
    int n,sum1 = 0, sum2 = 0; cin >> n; 
    vector<int> v(n);
    rep(i,0,n) {
        cin >> v[i];
        sum2 += v[i];
    }
    sort(all(v),greater<int>());

    int ans;
    rep(i,0,n){
        sum1 += v[i];
        sum2 -= v[i];
        if(sum1 > sum2){
            ans = i+1; break;
        }
    }

    cout << ans << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1; 
    while(t--){
        solve();
    }
}