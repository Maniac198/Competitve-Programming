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

bool check(vector<int> a, int mid, int n,int k){
    vector<int> b = a;
    rep(i,0,n){
        if(a[i] >= mid) b[i] = 1; 
        else b[i] = -1;
    }

    rep(i,1,n) b[i] += b[i-1];
    int mn = 0, mx = b[n-1];

    rep(i,k,n){
        mn = min(mn,b[i-k]);
        mx = max(mx,b[i]-mn);
    }

    if(mx>0) return true;

    return false;
}
void solve(){
    int n,k; cin>>n>>k; 
    vector<int> a(n); 
    rep(i,0,n) cin>>a[i];

    int l = 1, r = n+1; 
    while( l <= r ){
        int mid = (l+r)/2; 

        if(check(a,mid,n,k)){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }

    cout << r << endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}