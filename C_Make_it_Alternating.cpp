#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vb v.begin()
#define      ve v.end()
#define      endl '\n';
const        int MOD = 998244353;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

const long long N = 2e5 + 5;
long long factorial[N];

void solve(){
    string s; cin>>s;

    vector<int> a;
    long long n = s.size(); 
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || s[i] != s[i - 1]){
            a.push_back(0);
        }
        a.back()++;
    }   

    for(auto it : a){
        
    }

    long long ans1 = 0, ans2 = 1;
    for (int i : a){
        if (i > 1){
            ans1 += i - 1;
            ans2 = (ans2 * i * 1ll) % MOD;
        }
    }
        
    cout << ans1 <<" "<< ans2 * factorial[ans1] % MOD << endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    factorial[0] = 1;
    for (int i = 1; i < N; i++){
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
        
    int t; cin >> t;
    while(t--){
        solve();
    }
}