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
    int n,m,k; cin>>n>>m>>k; 
    int p = m/n; 
    if(k>3){
        cout<<0<<endl;
        return;
    }
    else if(k == 2){
        if(m > n){
            cout<<n+p-1<<endl;
            return; 
        }
        cout<<m<<endl;
        return; 
    }
    else if(k == 3){
        if(m > n){
            cout<<(m-n+1)-p<<endl; 
            return; 
        }
        cout<<0<<endl;
        return; 
    }
    else{
        cout<<1<<endl;
        return; 
    }
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}