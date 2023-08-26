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
    vector<int> v(n);
    rep(i,0,n){
        cin>>v[i];
    }

    if(*max_element(vb,ve) > n){
        cout<<"NO"<<endl;
        return;
    }

    vector<int> ans(n+1,0);
    rep(i,0,n){
        ans[0]++;
        ans[v[i]]--;
    }

    int sum = 0;
    rep(i,0,n){
        sum += ans[i];
        ans[i] = sum;
    }

    bool flag = true;
    rep(i,0,n){
        if(ans[i] != v[i]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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