#include <bits/stdc++.h>
using namespace std;
 
#define     yes {cout<<"YES"<<endl;}
#define     no {cout<<"NO"<<endl;}
#define     ll long long 
#define     endl '\n';
#define     all(x) x.begin(),x.end()
#define     rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
// int         lcm(int a,int b) { return a / gcd(a,b)*b; }
int         nxt(){ int x; cin>>x; return x;}
const       int MOD = 1e9 + 7;
#define     what_is(x) cerr << #x << " is " << x << endl;
 
void solve(){
    int n; cin >> n; 
    vector<int> v(n); 
    map< int,vector<int> > mp; 
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]].push_back(i);
    }

    vector< vector<int> > a; 
    for(auto it : mp){
        a.push_back( it.second );
    }
    sort(all(a));

    int m; cin >> m; 
    while( m-- ){
        string s; cin >> s; 
        if( s.size() != n ){
            no; continue;
        }
        else{
            map< char,vector<int> > mp; 
            for(int i = 0; i < s.size(); i++){
                mp[s[i]].push_back(i);
            }

            vector< vector<int> > b; 
            for(auto it : mp){
                b.push_back( it.second );
            }
            sort(all(b));

            if( a == b ){
                yes; continue;
            }
            else{
                no; continue;
            }
        }
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}