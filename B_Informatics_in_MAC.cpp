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
    int n; cin>>n; 
    int arr[100005] = {0};
    vector<int> v(n);
    for(auto &it : v) cin>>it; 

    rep(i,0,n){
        int tp = v[i];
        arr[tp]++;
    }

    int mex = 0; 
    rep(i,0,n){
        if(arr[i] == 0) break;
        else mex++;
    }

    vector<pair<int,int>> ans; 
    int i = 0, l = 1;
    set<int> tp; 
    while(i < n){
        if(v[i] < mex){
            tp.insert(v[i]);
        }

        if(tp.size() == mex){
            ans.push_back({l,i+1});
            l = i+2;
            tp.clear();
        }
        i++; 
    }

    if(ans.size() == 1){
        cout<<-1<<endl;
        return;
    }

    int sz = ans.size();
    cout<<sz<<endl;
    for(int i = 0; i<sz-1; i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    cout<<ans[sz-1].first<<" "<<n<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}