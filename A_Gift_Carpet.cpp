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

void solve(){
    int n,m; cin>>n>>m;

    string s[n];

    rep(i,0,n){
        cin>>s[i];
    }

    int cnt = 0;
    rep(i,0,m){
        rep(j,0,n){
            if(s[j][i]=='v' && cnt == 0){
                cnt++;
                break;
            }
            if(s[j][i]=='i' && cnt == 1){
                cnt++;
                break;
            }
            if(s[j][i]=='k' && cnt == 2){
                cnt++;
                break;
            }
            if(s[j][i]=='a' && cnt == 3){
                cnt++;
                break;
            }
        }
    }

    if(cnt>=4){
        cout<<"YES"<<endl; }
    else
    { cout<<"NO"<<endl; }
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}