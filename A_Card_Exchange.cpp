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
     int n, k;
    cin>>n>>k;

    vector<int> cnt(105);
    bool ok = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        cnt[x]++;
        if(cnt[x] >= k) ok = 1;
    }

    if(!ok){
        cout << n << endl;
    }
    else {
        cout<<k-1<<endl;
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