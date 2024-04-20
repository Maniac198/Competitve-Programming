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
    vector<int> div = {1,n};
    for(int i = 2; i*i <= n; i++){
        if( n%i == 0 ){
            if( i != n/i ){
                div.push_back(i);
                div.push_back(n/i);
            }
            else{
                div.push_back(i);
            }
        }
    }

    sort(all(div));
    for(auto it : div){
        reverse(s.begin(),s.begin()+it);
    }

    cout << s;
}   
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1; 
    while(t--){
        solve();
    }
}