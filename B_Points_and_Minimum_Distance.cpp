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
    int n; cin>>n; 
    int arr[2*n]; 
    for(int i = 0; i<n*2; i++){
        cin>>arr[i]; 
    }

    sort(arr,arr+n*2);

    int ans = 0; 
    for(int i = 1; i<=n-1; i++){
        ans += (arr[i] - arr[i-1]);
    }

    for(int i = n+1; i<2*n; i++){
        ans += (arr[i] - arr[i-1]);
    }

    cout<<ans<<endl;
    for(int i = 0, j = n; i<n && j<2*n; i++ , j++){
        cout<<arr[j] <<' '<< arr[i]<<endl;
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