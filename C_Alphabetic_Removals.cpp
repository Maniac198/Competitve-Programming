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
    int n, k; cin >> n >> k; 
    string s; cin >> s; 
    vector<int> v(26,0);
    for(auto it : s) v[it-'a']++;

    int ind = 26;
    for(int i= 0; i < 26; i++){
        if( k >= v[i] ){
            k -= v[i];
        }
        else{
            ind = i;
            break;
        }
    }

    string ans;
    int rem = k;
    for(auto c : s){
        int cur = c-'a';
        if( cur > ind || ( cur == ind and rem == 0)){
            ans += c;
        }
        else if(cur == ind){
            --rem;
        }
    }

    cout << ans;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}