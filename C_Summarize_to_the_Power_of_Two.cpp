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
    int n; cin >> n; 
    vector<int> v(n);
    map<int,int> mp; 
    rep(i,0,n){
        cin >> v[i];
        mp[v[i]]++;
    }

    int maxi = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 32; j++){
            int x = ( 1 << j ) - v[i];
            bool flag = false;
            if( mp.count(x) && (mp[x]>1 || (mp[x] == 1 and x != v[i])) ) flag = true;
            if( flag ){
                maxi ++;
                break;
            }
        }
    }

    cout << n - maxi << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}