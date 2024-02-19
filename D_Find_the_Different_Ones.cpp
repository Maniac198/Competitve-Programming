#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n = nxt(); 

    vector<int> help(n);
    vector<int> a(n);
    for(auto &it : a) cin>>it; 

    help[n-1] = n;
    for(int i = n-2; i>=0; i--){
        help[i] = (a[i] == a[i+1] ? help[i+1] : i+1);
    }

    int q = nxt();
    while(q--){
        int l = nxt(), r = nxt();
        l--; r--;
        if(help[l] <= r){
            cout<<l+1<<" "<<help[l]+1<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }

    cout<<endl;

}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}