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
    string s; cin >> s; 
    vector<int> ans;

    if( n&1 ){
        cout << -1 << endl;
        return;
    }

    char prev = s[1];
    for(int i = 1; i < n; i+=2){
        if( s[i] != s[i-1] ){
            if( prev != s[i] ){
                ans.push_back(i);
                prev = s[i];
            }
            else{
                ans.push_back(i+1);
                prev = s[i-1];
            }
        }
    }
    

    cout << ans.size() << endl;
    for(auto it : ans) cout << it << " ";
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