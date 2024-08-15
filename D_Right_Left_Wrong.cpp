// #include <bits/stdc++.h>
// using namespace std;
 
// #define     yes {cout<<"YES"<<endl;}
// #define     no {cout<<"NO"<<endl;}
// #define     int long long 
// #define     endl '\n';
// #define     all(x) x.begin(),x.end()
// #define     rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
// // int         lcm(int a,int b) { return a / gcd(a,b)*b; }
// int         nxt(){ int x; cin>>x; return x;}
// const       int MOD = 1e9 + 7;
// #define     what_is(x) cerr << #x << " is " << x << endl;
 
// void solve(){
//     int n; cin >> n; 
//     vector<int> v(n), pref(n+1,0);
//     for(auto &it : v) cin >> it; 
//     string s; cin >> s; 

//     for(int i = 0; i < n; i++){
//         pref[i+1] = pref[i] + v[i];
//     }   

//     vector<int> l,r;
//     for(int i = 0; i < n; i++){
//         if( s[i] == 'L' ){
//             l.push_back(i);
//         }
//         else{
//             r.push_back(i);
//         }
//     }

//     reverse(r.begin(),r.end());

//     int ans = 0;
//     for(int i = 0; i < min( l.size(), r.size() ); i++){
//         if( l[i] < r[i] ){
//             ans += (pref[r[i]+1] - pref[l[i]]);
//         }
//     }
//     cout << ans << endl;

// }
     
// signed main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
 
//     int t; cin >> t;
//     while(t--){
//         solve();
//     }
// }

#include <bits/stdc++.h>
using namespace std;
 
#define     yes {cout<<"YES"<<endl;}
#define     no {cout<<"NO"<<endl;}
#define     int long long 
#define     endl '\n';
#define     all(x) x.begin(),x.end()
#define     rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int         lcm(int a,int b) { return a / gcd(a,b)*b; }
int         nxt(){ int x; cin>>x; return x;}
const       int MOD = 1e9 + 7;
#define     what_is(x) cerr << #x << " is " << x << endl;
 
void solve(){
    int n; cin >> n; 
    vector<int> v(n), pref(n+1,0);
    for(auto &it : v) cin >> it; 
    string s; cin >> s; 
 
    for(int i = 0; i < n; i++){
        pref[i+1] = pref[i] + v[i];
    }   
 
    vector< pair<int,int> > a;
    int l = 0, r = n-1; 
    while( l < r ){
        if(s[l] == 'L' and s[r] == 'R'){
            a.push_back(make_pair(l,r));
            l++; r--;
        }
        else if(s[l] != 'L'){
            l++;
        }
        else if(s[r] != 'R'){
            r--;
        }
    }
 
    int ans = 0;
    for(auto it : a){
        ans += ( pref[it.second+1] - pref[it.first] );
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