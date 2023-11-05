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
    int a[3]; 
    for(int i = 0; i<3; i++){
        cin>>a[i];
    }
    // cout<<a[0]<<" "<<a[1]<<endl;
    sort(a,a+3);
    if(a[0] == a[1] && a[1] == a[2]){
        yes;
        return;
    }

    if(a[1]%a[0]==0 && a[2]%a[0]==0){
        if(a[1]/a[0] - 1 + a[2]/a[0] - 1 <= 3){
            yes;
            return;
        }
    }

    no; 
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}