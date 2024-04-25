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
        ll n; cin>>n;
        ll a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        string s;
        cin>>s;
        vector<ll>xo; xo.push_back(0);
        for(int i=0; i<n; i++){
            ll nxt = xo[xo.size()-1] ^ a[i]; xo.push_back(nxt);
        }
        ll q;
        cin>>q;
        ll onexo=0,zerxo=0;
        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                zerxo = zerxo ^ a[i];
            }
            else{
                onexo = onexo ^ a[i];
            }
        }
        for(int i=0; i<q; i++){
            ll tp;
            cin>>tp;
            if(tp == 1){
                ll l,r;
                cin>>l>>r;
                ll run = xo[r] ^ xo[l-1];
                onexo = onexo ^ run; zerxo = zerxo ^ run;
            }
            else{
                ll g;
                cin>>g;
                if(g == 1){
                    cout<<onexo<<" ";
                }
                else{
                    cout<<zerxo<<" ";
                }
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