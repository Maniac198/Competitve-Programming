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
    string s; cin >> s; 
    int sz = s.size();

    int cnt = 0, sum = 0, res = 0;
    rep(i,0,sz){
        int curr = s[i] - '0';
        sum += curr;
        cnt++;
        if( sum%3 == 0 || curr%3 == 0 || cnt == 3 ){
            res ++;
            sum = 0; 
            cnt = 0;
        }
    }

    cout << res << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}