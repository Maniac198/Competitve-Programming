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

inline bool bt(int x, int pos){
    return ((x & (1ll << pos)) > 0); 
}

void solve(){
    int a,b; cin>>a>>b; 

    int L = 62; 
    int cnt = 0, last = -1;
    for(int i = L; i>=0; i--){
        if(bt(a,i)){
            if(bt(b,i)){
                cout<<1<<endl;
                cout<<a<<' '<<b<<endl;
                return;
            }

            cnt++;
            last = i; 
            if(cnt == 2) break;
        }
        else if(bt(b,i)){
            cout<<-1<<endl;
            return;
        }
    }

    cout<<2<<endl;
    cout<<a<<' '<< b+(1ll<<last)<<' '<<b<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}