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
    int a,b,d; cin>>a>>b>>d;
    vector<int> v(a), u(b); 
    for(auto &it : v) cin>>it; 
    for(auto &it : u) cin>>it; 

    sort(all(v));
    sort(all(u));

    int i = 0, j = 0; 
    int cnt = 0;
    while(i < a && j < b){
        if(abs(v[i]-u[j]) <= d){
            cnt++;
            i++, j++;
        }
        else{
            if(v[i] > u[j]) j++;
            else i++;
        }
    }
    cout<<cnt<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}