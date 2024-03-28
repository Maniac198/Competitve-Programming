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

    map<ll,ll> mp, freq;
    mp[0] = 1LL; 
    rep(i,1,31){
        mp[i] = mp[i-1LL] * 2LL;
    }

    while ( n-- ){
        int a,b; cin >> a >> b; 

        if( a == 1 ){
            freq[mp[b]]++;
        }
        else{
            rep(i,31,0){
                if ( b >= mp[i] and b != 0 ){
                    if(freq.count(mp[i])){
                        b -= (min(freq[mp[i]],b/mp[i]) * mp[i] );
                    }
                }
            }

            if( b == 0 ){
                yes; continue;
            }
            else{
                no; continue;
            }
        }
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}