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
    for(auto &it : v) cin >> it;

    int q = n;
    int i = 0; 
    while( q-- ){
        int p = nxt();
        string tp; cin >> tp; 

        int cnt = 0;
        for(int i = 0; i < p; i++){
            if(tp[i] == 'U') cnt--;
            else cnt++;
        }

        v[i] = (v[i]+cnt+10)%10;
        i++;
    }

    rep(i,0,n){
        cout << v[i] << " ";
    }
    cout << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}