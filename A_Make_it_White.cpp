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

    int l = 0; 
    int r = n-1;

    if(n==1 && s[0] == 'W'){
        cout<<0<<endl;
        return;
    }
    if(n==1 && s[0] == 'B'){
        cout<<1<<endl;
        return;
    }

    for(int i = 0; i<n; i++){
        if(s[i] == 'B') break;
        else l ++;
    }

    for(int i = n-1; i>=0; i--){
        if(s[i] == 'B') break;
        else r--;
    }

    // cout<<s<<" "<<l<<" "<<r<<endl;
    cout<<r-l+1<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}