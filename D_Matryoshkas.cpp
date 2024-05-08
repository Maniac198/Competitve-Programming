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
    map<int,int> mp; 
    set<int> st; 

    rep(i,0,n){
        int tp; cin >> tp;
        mp[tp]++;
        st.insert(tp);
        st.insert(tp+1);
    }

    int last = 0; 
    int ans = 0;
    for(auto it : st){
        int c = mp[it];
        ans += max( 0 , c - last );
        last = c; 
    }

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