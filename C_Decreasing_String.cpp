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
    string a; cin>>a; 
    int p; cin>>p; 

    int n = a.size();

    int cnt = 0;
    while(p>n){
        cnt ++;
        p -= n; 
        n--; 
    }

    n = a.size();
    string s = "";
    for(int i = 0; i<n; i++){
        while(cnt && !s.empty() && s.back() > a[i]){
            s.pop_back();
            cnt --;
        }

        s.push_back(a[i]);
    }   

    while(cnt){
        s.pop_back();
        cnt --;
    }

    cout<<s[p-1];
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}