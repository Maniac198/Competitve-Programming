#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, b, e) for (__typeof(e) i = (b) - ((b) > (e)); i != (e) - ((b) > (e)); i += 1 - 2 * ((b) > (e)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int a,b; cin>>a>>b; 
    vector<int> v(a); 
    rep(i,0,a) v[i] = nxt();
    sort(all(v)); 

    int i = 0, j = a-1; 
    int cnt = 0;
    bool h[a] = {false};
    while( i < j ){
        if(v[i]  + v[j] <= b){
            cnt++;
            h[i] = h[j] = true;
            i++; j--;
        }
        else{
            j--;
            cnt++;
        }
    }
    rep(i,0,a){
        cnt += (h[i] == false);
    }
    cout<<cnt<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}