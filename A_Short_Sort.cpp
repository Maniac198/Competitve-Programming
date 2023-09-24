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
    string s; cin>>s; 
    string a,b,c;
    a = b = c = s;
    swap(a[0],a[1]);
    swap(b[1],b[2]);
    swap(c[0],c[2]);

    if(a == "abc" || b == "abc" || c=="abc" || s=="abc"){
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