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
    vector<int> v,cnt(10,0);
    rep(i,0,n){
        int tp; cin >> tp; 
        int rem = tp%10;
        if( cnt[rem] <= 3 ){
            v.push_back(rem);
        }
        cnt[rem]++;
    }

    int sz = v.size();
    rep(i,0,sz){
        rep(j,i+1,sz){
            rep(k,j+1,sz){
                if( (v[i]+v[j]+v[k])%10 == 3){
                    yes; return;
                }
            }
        }
    }

    no;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}