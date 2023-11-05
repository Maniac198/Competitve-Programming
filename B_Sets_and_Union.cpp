#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vb v.begin()
#define      ve v.end()
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve(){
    int n; cin>>n; 

    vector<vector<int>> v;
    rep(i,0,n){
        int size; cin>>size;
        vector<int> tp;
        rep(j,0,size){
            int tp1; cin>>tp1; 
            tp.push_back(tp1);
        }
        v.push_back(tp);
    }
    
    set<int> uni; 
    rep(i,0,n){
        for(auto it : v[i]){
            uni.insert(it);
        }
    }

    // cout<<uni.size()<<endl;
    int maxi = INT_MIN;

    for(auto it : uni){
        unordered_set<int> un; 
        for(auto vec : v){
            if(find(vec.begin(),vec.end(),it) == vec.end()){
                for(auto vt : vec){
                    un.insert(vt);
                }
            }
        }
        int siz = un.size();
        maxi = max(maxi,siz);
    }

    cout<<maxi<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}