#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n; cin >> n; 
    int ans = 0; 
    vector<vector<int>> cnt(12,vector<int>(12,0));

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < 2; j++){
            for(char c = 'a'; c <= 'k'; c++){
                if(c != s[j]){
                    string p = s; 
                    p[j] = c;
                    ans += cnt[p[0]-'a'][p[1]-'a'];
                }
            }
        }

        cnt[s[0]-'a'][s[1]-'a']++;
    }

    cout << ans << endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;    
    while(t--){
        solve();
    }
}