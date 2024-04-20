#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      ll long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){   
    int n,k; cin >> n >> k; 
    unordered_map<int,int> mp; 
    rep(i,1,n+1){
        int tp; cin >> tp; 
        if( mp[tp] == 0 ){
            mp[tp] = i;
        }
    }

    if( mp.size() >= k ){  
        yes; 
        vector<int> ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        sort(all(ans));
        for(int i = 0; i < k; i++) cout << ans[i] << " ";
    }
    else{
        no;
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}