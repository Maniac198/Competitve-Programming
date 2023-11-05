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
    int a,b; cin>>a>>b; 
    string s,t; cin>>s>>t; 

    bool f = true, g = true; 

    for(int i = 0; i<b-1; i++){
        if(t[i] == t[i+1]){
            g = false; 
            break;
        }
    }

    for(int i = 0; i<a-1; i++){
        if(s[i] == s[i+1]){
            if(t[0] != s[i] && t[b-1] != s[i+1] && g) continue; 

            f = false;
        }
    }

    if(f){
        yes; 
    }
    else{
        no;
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