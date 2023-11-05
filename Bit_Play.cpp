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
    string s; cin>>s;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = s[i] - '0';
    }   

    vector<int> ans; 
    int i = 2; 
    while(i<n) {
        int temp = 0;
        if ((arr[i-2] | arr[i - 1]) == arr[i]) {
            temp++;
        }
        if ((arr[i-2] & arr[i - 1]) == arr[i]) {
            temp++;
        }
        if ((arr[i-2] ^ arr[i - 1]) == arr[i]) {
            temp++;
        }
        ans.push_back(temp);
        i += 2;
    }
    long result = 1;
    
    for (int num : ans) {
        result *= num;
        result %= MOD;
    }
    
    cout<<result%MOD<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}