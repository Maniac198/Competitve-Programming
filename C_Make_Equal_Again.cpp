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
    int maxl = 1;
    int maxr = 1; 
    int l_element,r_element;

    vector<int> v(n);
    for(auto &it : v) cin>>it;

    int tp = 1;
    l_element = v[0];
    for(int i = 0; i<n-1; i++){
        if(v[i] == v[i+1]){
            tp++;
            maxl = max(maxl,tp);
            l_element = v[i];
        }
        else{
            maxl = max(maxl,tp);
            break;
        }
    } 

    tp = 1;
    r_element = v[n-1];
    for(int i = n-1; i>0; i--){
        if(v[i] == v[i-1]){
            tp++;
            maxr = max(maxr,tp);
            r_element = v[i];
        }
        else{
            maxr = max(maxr,tp);
            break;
        }
    } 

    // cout<<"l-- "<<l_element<<" "<<maxl<<endl;
    // cout<<"r-- "<<r_element<<" "<<maxr<<endl;

    // cout<<endl;
    if(r_element == l_element && maxl != n){
        cout<<n-maxl-maxr<<endl;
        return;
    }

    cout<<n-max(maxl,maxr)<<endl;
}
          
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}