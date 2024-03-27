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
    int n; cin>>n; 
    string s; cin>>s; 

    string ans;
    rep(i,n,0){
        if(s[i] == 'a' || s[i] == 'e'){
            rep(j,i+1,i-1){
                ans += s[j];
            }
            ans += '.';
            i--;
        }
        else{
            rep(j,i+1,i-2){
                ans+=s[j];
            }
            ans += '.';
            i-=2; 
        }
    }
    reverse(all(ans));
    cout<<ans.substr(1,ans.size())<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}