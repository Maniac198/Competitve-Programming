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
int          N = 1e5+10;

void solve(){
    ll n; cin >> n; 

    int a[100005] = {0};
    vector<int> v(n);
    rep(i,0,n){ 
        cin >> v[i];
        a[v[i]]++;
    }

    vector<int> ans(n);

    int cnt = n;
    int ans = 0;
    rep(i,0,n){
        ans = ans + a[i];
        cnt = cnt - ans;

        cout << cnt << " ";
        if( cnt == 0 ){
            cout << endl;
            return;
        }
        a[v[i]]--;
        cnt--;

    }
    cout << 0 << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}