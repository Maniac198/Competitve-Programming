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
    string s,ans; cin>>s; 
    int n = s.length();

    int a = 0, b = 0; 
    rep(i,n,0){
        if(s[i] == 'b') a++;
        else if(s[i] == 'B') b++;
        else{
            if(islower(s[i])){
                if(a) a--;
                else ans.push_back(s[i]);
            }
            else{
                if(b) b--;
                else ans.push_back(s[i]);
            }
        }
    }

    reverse(all(ans));
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