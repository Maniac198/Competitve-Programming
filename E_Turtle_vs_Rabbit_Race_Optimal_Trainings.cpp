#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
// #define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<long>a(n + 1);
    a[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] += a[i - 1];
    }

    int q = nxt();
    while(q--){
        int l = nxt(), u = nxt();
        int low = l, high = n, pos = l;
        while(low <= high){
            int mid = (low + high) >> 1;
            if(a[mid] - a[l - 1] <= u){
                low = (pos = mid) + 1;
            }
            else{
                high = mid - 1;
            }
        }
        cout << pos + int(pos < n && a[pos + 1] - a[l - 1] - u <= u - a[pos] + a[l - 1]) << " ";
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