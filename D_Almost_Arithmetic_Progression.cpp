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
    vector<int> v(n);
    rep(i,0,n) cin >> v[i];

    if( n <= 2 ) cout << 0;
    else{
        int ans = 1e9;
        for(int i : {-1,0,1}){
            for(int j : {-1,0,1}){
                int a1 = v[0] + i;
                int a2 = v[1] + j;
                int prev = a2;
                int diff = a2 - a1;
                int cnt = abs(i) + abs(j);
                for(int k = 2; k < n; k++){
                    int nxt = prev + diff;
                    if( abs(nxt-v[k]) == 1 ) cnt++;
                    else if( abs(nxt-v[k]) > 1){
                        cnt = 1e9;
                        break;
                    }
                    prev = nxt;
                }

                ans = min(ans,cnt);
            }
        }

        cout << (ans == 1e9 ? -1 : ans);
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