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
    int n,k; cin>>n>>k; 
    vector<int> a(n),b(n);
    int f[n+1] = {0};
    int m[n+1] = {0};
    rep(i,0,n){
        int tp = nxt();
        a[i] = tp;
        f[tp]++;
    }
 
    rep(i,0,n){
        int tp = nxt();
        b[i] = tp;
        m[tp]++;
    }
 
    vector<int> c,d,e;
    sort(all(a));
    sort(all(b));
 
    int i = 1; 
    while( i <= n){
        if( (*lower_bound(all(a),i)) == (*lower_bound(all(b),i))){
            c.push_back(i);
        }
        i++;
    }
 
    i = 1;
    while(i <= n){
        if (f[i] == 2){
            d.push_back(i);
        }
        if(m[i] == 2){
            e.push_back(i);
        }
        i++;
    }
 
    vector<int> ans1,ans2;
    if(d.size() > 0 and e.size() > 0){
        int p = 0, q = 0;
        while(p < d.size() and q < e.size() and k){
            ans1.push_back(d[p]);
            ans2.push_back(e[q]);
            ans1.push_back(d[p]);
            ans2.push_back(e[q]);
            p++; q++;
            k--;
        }
    }
 
    int r = 0;
    while(k>0 and r < c.size()){
        ans1.push_back(c[r]);
        ans2.push_back(c[r]);
        r++;
        if(r%2==0){
            k--;
        }
    }
 
    rep(i,0,ans1.size()){
        cout<<ans1[i]<<" ";
    }
    cout<<endl;
    rep(i,0,ans2.size()){
        cout<<ans2[i]<<" ";
    }
    cout<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}