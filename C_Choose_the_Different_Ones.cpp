#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no  {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n,m,k; cin>>n>>m>>k; 
    vector<pair<bool,bool>> v(k); 

    for(int i = 0; i<k; i++){
        v[i].first = false;
        v[i].second = false;
    }

    for(int i = 0; i<n; i++){
        int tp = nxt(); 
        if(tp<=k) v[tp-1].first = true;
    }

    for(int i = 0; i<m; i++){
        int tp = nxt(); 
        if(tp<=k) v[tp-1].second = true;
    }

    int a = 0, b = 0, ab = 0;
    for(int i = 0; i<k; i++){
        if(v[i].first == true && v[i].second == false) a++;
        else if(v[i].first == false && v[i].second == true) b++;
        else if(v[i].first && v[i].second) ab++;
        else{
            no; return;
        } 
    }
    
    a = (k/2) - a; 
    b = (k/2) - b;

    if(a < 0 || b < 0 || ab < a+b ){
        no; return;
    }

    yes;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}